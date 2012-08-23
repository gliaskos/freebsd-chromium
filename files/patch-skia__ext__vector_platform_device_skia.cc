--- ./skia/ext/vector_platform_device_skia.cc.orig	2012-08-17 03:01:33.000000000 +0200
+++ ./skia/ext/vector_platform_device_skia.cc	2012-08-23 22:31:45.000000000 +0200
@@ -78,7 +78,7 @@
   SkASSERT(false);
   return NULL;
 }
-#elif defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
 void VectorPlatformDeviceSkia::DrawToNativeContext(
     PlatformSurface surface, int x, int y, const PlatformRect* src_rect) {
   // Should never be called on Linux.
