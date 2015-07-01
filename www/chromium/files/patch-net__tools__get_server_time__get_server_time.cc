--- net/tools/get_server_time/get_server_time.cc.orig  Sat May 23 00:59:48 2015
+++ net/tools/get_server_time/get_server_time.cc    Sat May 23 01:15:24 2015
@@ -43,7 +43,7 @@
 
 #if defined(OS_MACOSX)
 #include "base/mac/scoped_nsautorelease_pool.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #include "net/proxy/proxy_config.h"
 #include "net/proxy/proxy_config_service_fixed.h"
 #endif
@@ -138,7 +138,7 @@ class PrintingLogObserver : public net::NetLog::Thread
 scoped_ptr<net::URLRequestContext>
 BuildURLRequestContext(net::NetLog* net_log) {
   net::URLRequestContextBuilder builder;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // On Linux, use a fixed ProxyConfigService, since the default one
   // depends on glib.
   //
