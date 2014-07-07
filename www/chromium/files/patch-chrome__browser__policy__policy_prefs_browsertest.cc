--- ./chrome/browser/policy/policy_prefs_browsertest.cc.orig	2014-06-30 21:02:20.000000000 +0200
+++ ./chrome/browser/policy/policy_prefs_browsertest.cc	2014-07-01 22:46:25.000000000 +0200
@@ -169,6 +169,8 @@
     const std::string os("chromeos");
 #elif defined(OS_LINUX)
     const std::string os("linux");
+#elif defined(OS_FREEBSD)
+    const std::string os("freebsd");
 #else
 #error "Unknown platform"
 #endif
