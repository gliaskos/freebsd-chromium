--- gpu/command_buffer/common/gpu_memory_buffer_support.cc.orig	2019-09-09 21:55:18 UTC
+++ gpu/command_buffer/common/gpu_memory_buffer_support.cc
@@ -92,7 +92,7 @@ bool IsImageSizeValidForGpuMemoryBufferFormat(const gf
 uint32_t GetPlatformSpecificTextureTarget() {
 #if defined(OS_MACOSX)
   return GL_TEXTURE_RECTANGLE_ARB;
-#elif defined(OS_ANDROID) || defined(OS_LINUX)
+#elif defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
   return GL_TEXTURE_EXTERNAL_OES;
 #elif defined(OS_WIN) || defined(OS_FUCHSIA)
   return GL_TEXTURE_2D;
