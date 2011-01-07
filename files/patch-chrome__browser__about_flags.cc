--- ./chrome/browser/about_flags.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/about_flags.cc	2011-01-07 14:17:10.000000000 +0100
@@ -436,7 +436,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   return kOsLinux;
 #else
 #error Unknown platform
