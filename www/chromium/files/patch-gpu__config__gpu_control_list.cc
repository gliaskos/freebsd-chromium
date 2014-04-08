--- ./gpu/config/gpu_control_list.cc.orig	2014-04-02 21:03:15.000000000 +0200
+++ ./gpu/config/gpu_control_list.cc	2014-04-04 01:39:18.000000000 +0200
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
