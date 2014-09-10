--- gpu/config/gpu_control_list.cc.orig	2014-09-04 00:29:11 UTC
+++ gpu/config/gpu_control_list.cc
@@ -1480,10 +1480,10 @@
   return kOsWin;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
-  return kOsLinux;
 #elif defined(OS_MACOSX)
   return kOsMacosx;
+#elif defined(OS_POSIX)
+  return kOsLinux;
 #else
   return kOsUnknown;
 #endif
