--- ./chrome/browser/gpu_blacklist.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/gpu_blacklist.cc	2012-08-23 22:31:43.000000000 +0200
@@ -1053,7 +1053,7 @@
   return kOsChromeOS;
 #elif defined(OS_WIN)
   return kOsWin;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_MACOSX)
   return kOsMacosx;
