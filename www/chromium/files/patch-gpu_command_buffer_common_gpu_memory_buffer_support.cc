--- gpu/command_buffer/common/gpu_memory_buffer_support.cc.orig	2019-01-12 22:13:35.809008000 +0100
+++ gpu/command_buffer/common/gpu_memory_buffer_support.cc	2019-01-12 22:13:57.158939000 +0100
@@ -137,7 +137,7 @@
 uint32_t GetPlatformSpecificTextureTarget() {
 #if defined(OS_MACOSX)
   return GL_TEXTURE_RECTANGLE_ARB;
-#elif defined(OS_ANDROID) || defined(OS_LINUX)
+#elif defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
   return GL_TEXTURE_EXTERNAL_OES;
 #elif defined(OS_WIN)
   return GL_TEXTURE_2D;
