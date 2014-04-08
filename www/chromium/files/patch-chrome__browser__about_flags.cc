--- ./chrome/browser/about_flags.cc.orig	2014-04-02 21:04:38.000000000 +0200
+++ ./chrome/browser/about_flags.cc	2014-04-04 01:39:18.000000000 +0200
@@ -2320,7 +2320,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
