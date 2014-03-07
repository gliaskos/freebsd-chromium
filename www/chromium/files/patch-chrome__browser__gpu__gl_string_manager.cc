--- ./chrome/browser/gpu/gl_string_manager.cc.orig	2014-03-05 22:24:51.000000000 +0100
+++ ./chrome/browser/gpu/gl_string_manager.cc	2014-03-07 23:57:25.000000000 +0100
@@ -25,7 +25,7 @@
 
 void GLStringManager::Initialize() {
   // On MacOSX or Windows, preliminary GPUInfo is enough.
-#if defined(OS_LINUX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
   // We never remove this observer from GpuDataManager.
   content::GpuDataManager::GetInstance()->AddObserver(this);
 
