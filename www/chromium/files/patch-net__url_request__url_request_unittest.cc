--- net/url_request/url_request_unittest.cc.orig	2014-10-02 17:39:47 UTC
+++ net/url_request/url_request_unittest.cc
@@ -6974,6 +6974,28 @@
   }
 }
 
+// AssertTwoDistinctSessionsInserted checks that |session_info|, which must be
+// the result of fetching "ssl-session-cache" from the test server, indicates
+// that exactly two different sessions were inserted, with no lookups etc.
+static void AssertTwoDistinctSessionsInserted(const string& session_info) {
+  std::vector<std::string> lines;
+  base::SplitString(session_info, '\n', &lines);
+  ASSERT_EQ(3u, lines.size()) << session_info;
+
+  std::string session_id;
+  for (size_t i = 0; i < 2; i++) {
+    std::vector<std::string> parts;
+    base::SplitString(lines[i], '\t', &parts);
+    ASSERT_EQ(2u, parts.size());
+    EXPECT_EQ("insert", parts[0]);
+    if (i == 0) {
+      session_id = parts[1];
+    } else {
+      EXPECT_NE(session_id, parts[1]);
+    }
+  }
+}
+
 TEST_F(HTTPSRequestTest, SSLSessionCacheShardTest) {
   // Test that sessions aren't resumed when the value of ssl_session_cache_shard
   // differs.
@@ -7041,36 +7063,74 @@
     // three lines.
 
     EXPECT_EQ(1, d.response_started_count());
-    std::vector<std::string> lines;
-    base::SplitString(d.data_received(), '\n', &lines);
-    ASSERT_EQ(3u, lines.size());
+    AssertTwoDistinctSessionsInserted(d.data_received());
+  }
+}
 
-    std::string session_id;
-    for (size_t i = 0; i < 2; i++) {
-      std::vector<std::string> parts;
-      base::SplitString(lines[i], '\t', &parts);
-      ASSERT_EQ(2u, parts.size());
-      EXPECT_EQ("insert", parts[0]);
-      if (i == 0) {
-        session_id = parts[1];
-      } else {
-        EXPECT_NE(session_id, parts[1]);
-      }
+class TestSSLConfigService : public SSLConfigService {
+ public:
+  TestSSLConfigService(bool ev_enabled,
+                       bool online_rev_checking,
+                       bool rev_checking_required_local_anchors)
+      : ev_enabled_(ev_enabled),
+        online_rev_checking_(online_rev_checking),
+        rev_checking_required_local_anchors_(
+            rev_checking_required_local_anchors),
+        fallback_min_version_(0) {}
+
+  void set_fallback_min_version(uint16 version) {
+    fallback_min_version_ = version;
+  }
+
+  // SSLConfigService:
+  virtual void GetSSLConfig(SSLConfig* config) override {
+    *config = SSLConfig();
+    config->rev_checking_enabled = online_rev_checking_;
+    config->verify_ev_cert = ev_enabled_;
+    config->rev_checking_required_local_anchors =
+        rev_checking_required_local_anchors_;
+    if (fallback_min_version_) {
+      config->version_fallback_min = fallback_min_version_;
     }
   }
-}
 
-class HTTPSFallbackTest : public testing::Test {
+ protected:
+  virtual ~TestSSLConfigService() {}
+
+ private:
+  const bool ev_enabled_;
+  const bool online_rev_checking_;
+  const bool rev_checking_required_local_anchors_;
+  uint16 fallback_min_version_;
+};
+
+class FallbackTestURLRequestContext : public TestURLRequestContext {
  public:
-  HTTPSFallbackTest() : context_(true) {
-    context_.Init();
-    delegate_.set_allow_certificate_errors(true);
+  explicit FallbackTestURLRequestContext(bool delay_initialization)
+      : TestURLRequestContext(delay_initialization) {}
+
+  void set_fallback_min_version(uint16 version) {
+    TestSSLConfigService *ssl_config_service =
+        new TestSSLConfigService(true /* check for EV */,
+                                 false /* online revocation checking */,
+                                 false /* require rev. checking for local
+                                          anchors */);
+    ssl_config_service->set_fallback_min_version(version);
+    set_ssl_config_service(ssl_config_service);
   }
+};
+
+class HTTPSFallbackTest : public testing::Test {
+ public:
+  HTTPSFallbackTest() : context_(true) {}
   virtual ~HTTPSFallbackTest() {}
 
  protected:
   void DoFallbackTest(const SpawnedTestServer::SSLOptions& ssl_options) {
     DCHECK(!request_);
+    context_.Init();
+    delegate_.set_allow_certificate_errors(true);
+
     SpawnedTestServer test_server(
         SpawnedTestServer::TYPE_HTTPS,
         ssl_options,
@@ -7085,6 +7145,10 @@
     base::RunLoop().Run();
   }
 
+  void set_fallback_min_version(uint16 version) {
+    context_.set_fallback_min_version(version);
+  }
+
   void ExpectConnection(int version) {
     EXPECT_EQ(1, delegate_.response_started_count());
     EXPECT_NE(0, delegate_.bytes_received());
@@ -7103,7 +7167,7 @@
 
  private:
   TestDelegate delegate_;
-  TestURLRequestContext context_;
+  FallbackTestURLRequestContext context_;
   scoped_ptr<URLRequest> request_;
 };
 
@@ -7179,7 +7243,7 @@
   ExpectFailure(ERR_CONNECTION_CLOSED);
 }
 
-// Tests that the SSLv3 fallback triggers on alert.
+// Tests that the SSLv3 fallback doesn't happen by default.
 TEST_F(HTTPSFallbackTest, SSLv3Fallback) {
   SpawnedTestServer::SSLOptions ssl_options(
       SpawnedTestServer::SSLOptions::CERT_OK);
@@ -7187,10 +7251,23 @@
       SpawnedTestServer::SSLOptions::TLS_INTOLERANT_ALL;
 
   ASSERT_NO_FATAL_FAILURE(DoFallbackTest(ssl_options));
+  ExpectFailure(ERR_SSL_FALLBACK_BEYOND_MINIMUM_VERSION);
+}
+
+// Tests that the SSLv3 fallback works when explicitly enabled.
+TEST_F(HTTPSFallbackTest, SSLv3FallbackEnabled) {
+  SpawnedTestServer::SSLOptions ssl_options(
+      SpawnedTestServer::SSLOptions::CERT_OK);
+  ssl_options.tls_intolerant =
+      SpawnedTestServer::SSLOptions::TLS_INTOLERANT_ALL;
+  set_fallback_min_version(SSL_PROTOCOL_VERSION_SSL3);
+
+  ASSERT_NO_FATAL_FAILURE(DoFallbackTest(ssl_options));
   ExpectConnection(SSL_CONNECTION_VERSION_SSL3);
 }
 
-// Tests that the SSLv3 fallback triggers on closed connections.
+// Tests that the SSLv3 fallback triggers on closed connections when explicitly
+// enabled.
 TEST_F(HTTPSFallbackTest, SSLv3FallbackClosed) {
   SpawnedTestServer::SSLOptions ssl_options(
       SpawnedTestServer::SSLOptions::CERT_OK);
@@ -7198,11 +7275,81 @@
       SpawnedTestServer::SSLOptions::TLS_INTOLERANT_ALL;
   ssl_options.tls_intolerance_type =
       SpawnedTestServer::SSLOptions::TLS_INTOLERANCE_CLOSE;
+  set_fallback_min_version(SSL_PROTOCOL_VERSION_SSL3);
 
   ASSERT_NO_FATAL_FAILURE(DoFallbackTest(ssl_options));
   ExpectConnection(SSL_CONNECTION_VERSION_SSL3);
 }
 
+// Test that SSLv3 fallback probe connections don't cause sessions to be cached.
+TEST_F(HTTPSRequestTest, SSLv3FallbackNoCache) {
+  SpawnedTestServer::SSLOptions ssl_options(
+      SpawnedTestServer::SSLOptions::CERT_OK);
+  ssl_options.tls_intolerant =
+      SpawnedTestServer::SSLOptions::TLS_INTOLERANT_ALL;
+  ssl_options.tls_intolerance_type =
+      SpawnedTestServer::SSLOptions::TLS_INTOLERANCE_CLOSE;
+  ssl_options.record_resume = true;
+
+  SpawnedTestServer test_server(
+      SpawnedTestServer::TYPE_HTTPS,
+      ssl_options,
+      base::FilePath(FILE_PATH_LITERAL("net/data/ssl")));
+  ASSERT_TRUE(test_server.Start());
+
+  SSLClientSocket::ClearSessionCache();
+
+  // Make a connection that does a probe fallback to SSLv3 but fails because
+  // SSLv3 fallback is disabled. We don't wish a session for this connection to
+  // be inserted locally.
+  {
+    TestDelegate delegate;
+    FallbackTestURLRequestContext context(true);
+
+    context.Init();
+    scoped_ptr<URLRequest> request(context.CreateRequest(
+        test_server.GetURL(std::string()), DEFAULT_PRIORITY, &delegate, NULL));
+    request->Start();
+
+    base::RunLoop().Run();
+
+    EXPECT_EQ(1, delegate.response_started_count());
+    EXPECT_FALSE(request->status().is_success());
+    EXPECT_EQ(URLRequestStatus::FAILED, request->status().status());
+    EXPECT_EQ(ERR_SSL_FALLBACK_BEYOND_MINIMUM_VERSION,
+              request->status().error());
+  }
+
+  // Now allow SSLv3 connections and request the session cache log.
+  {
+    TestDelegate delegate;
+    FallbackTestURLRequestContext context(true);
+    context.set_fallback_min_version(SSL_PROTOCOL_VERSION_SSL3);
+
+    context.Init();
+    scoped_ptr<URLRequest> request(
+        context.CreateRequest(test_server.GetURL("ssl-session-cache"),
+                               DEFAULT_PRIORITY,
+                               &delegate,
+                               NULL));
+    request->Start();
+
+    base::RunLoop().Run();
+
+    EXPECT_EQ(1, delegate.response_started_count());
+    EXPECT_NE(0, delegate.bytes_received());
+    EXPECT_EQ(SSL_CONNECTION_VERSION_SSL3, SSLConnectionStatusToVersion(
+        request->ssl_info().connection_status));
+    EXPECT_TRUE(request->ssl_info().connection_status &
+                SSL_CONNECTION_VERSION_FALLBACK);
+
+    std::vector<std::string> lines;
+    // If no sessions were cached then the server should have seen two sessions
+    // inserted with no lookups.
+    AssertTwoDistinctSessionsInserted(delegate.data_received());
+  }
+}
+
 // This test is disabled on Android because the remote test server doesn't cause
 // a TCP reset.
 #if !defined(OS_ANDROID)
