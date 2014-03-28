--- ./chrome/browser/gpu/gl_string_manager.cc.orig	2014-03-26 21:15:48.000000000 +0100
+++ ./chrome/browser/gpu/gl_string_manager.cc	2014-03-28 10:57:59.000000000 +0100
@@ -25,7 +25,7 @@
 
 void GLStringManager::Initialize() {
   // On MacOSX or Windows, preliminary GPUInfo is enough.
-#if defined(OS_LINUX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
   // We never remove this observer from GpuDataManager.
   content::GpuDataManager::GetInstance()->AddObserver(this);
 
