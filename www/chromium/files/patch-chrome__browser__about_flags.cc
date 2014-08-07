--- ./chrome/browser/about_flags.cc.orig	2014-07-15 21:01:31.000000000 +0200
+++ ./chrome/browser/about_flags.cc	2014-07-20 18:13:07.000000000 +0200
@@ -2183,7 +2183,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
