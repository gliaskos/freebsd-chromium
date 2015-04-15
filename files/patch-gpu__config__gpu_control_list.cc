--- gpu/config/gpu_control_list.cc.orig	2014-10-10 08:54:15 UTC
+++ gpu/config/gpu_control_list.cc
@@ -1076,7 +1076,7 @@
GpuControlList::GpuControlListEntry::GetDefaultGLType() {
#if defined(OS_CHROMEOS)
  return kGLTypeGL;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
  return kGLTypeGL;
#elif defined(OS_MACOSX)
  return kGLTypeGL;
@@ -1482,10 +1482,10 @@
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
