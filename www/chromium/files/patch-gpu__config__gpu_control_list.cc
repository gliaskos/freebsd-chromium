--- ./gpu/config/gpu_control_list.cc.orig	2014-03-19 20:03:10.000000000 +0100
+++ ./gpu/config/gpu_control_list.cc	2014-03-21 00:27:12.000000000 +0100
@@ -1344,10 +1344,10 @@
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
