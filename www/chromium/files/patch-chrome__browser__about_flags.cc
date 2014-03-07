--- ./chrome/browser/about_flags.cc.orig	2014-03-04 03:17:18.000000000 +0100
+++ ./chrome/browser/about_flags.cc	2014-03-07 14:10:32.000000000 +0100
@@ -2208,7 +2208,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
