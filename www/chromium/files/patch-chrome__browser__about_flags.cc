--- ./chrome/browser/about_flags.cc.orig	2014-03-26 21:15:57.000000000 +0100
+++ ./chrome/browser/about_flags.cc	2014-03-28 10:57:59.000000000 +0100
@@ -2320,7 +2320,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
