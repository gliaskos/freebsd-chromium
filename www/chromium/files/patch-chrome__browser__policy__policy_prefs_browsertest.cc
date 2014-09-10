--- chrome/browser/policy/policy_prefs_browsertest.cc.orig	2014-09-04 00:29:10 UTC
+++ chrome/browser/policy/policy_prefs_browsertest.cc
@@ -169,6 +169,8 @@
     const std::string os("chromeos");
 #elif defined(OS_LINUX)
     const std::string os("linux");
+#elif defined(OS_FREEBSD)
+    const std::string os("freebsd");
 #else
 #error "Unknown platform"
 #endif
