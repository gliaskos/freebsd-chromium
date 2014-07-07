--- ./gpu/config/gpu_control_list.cc.orig	2014-06-30 21:01:22.000000000 +0200
+++ ./gpu/config/gpu_control_list.cc	2014-07-01 22:46:25.000000000 +0200
@@ -1512,10 +1512,10 @@
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
