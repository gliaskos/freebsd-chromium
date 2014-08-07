--- ./chrome/browser/policy/policy_prefs_browsertest.cc.orig	2014-07-15 21:01:30.000000000 +0200
+++ ./chrome/browser/policy/policy_prefs_browsertest.cc	2014-07-20 18:13:08.000000000 +0200
@@ -169,6 +169,8 @@
     const std::string os("chromeos");
 #elif defined(OS_LINUX)
     const std::string os("linux");
+#elif defined(OS_FREEBSD)
+    const std::string os("freebsd");
 #else
 #error "Unknown platform"
 #endif
