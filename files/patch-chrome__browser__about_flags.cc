--- ./chrome/browser/about_flags.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/about_flags.cc	2012-08-23 22:31:42.000000000 +0200
@@ -1066,7 +1066,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
