--- chrome/browser/about_flags.cc.orig	2014-09-04 00:29:09 UTC
+++ chrome/browser/about_flags.cc
@@ -2278,7 +2278,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
