--- ./skia/ext/vector_platform_device_skia.h.orig	2012-08-17 03:01:33.000000000 +0200
+++ ./skia/ext/vector_platform_device_skia.h	2012-08-23 22:31:45.000000000 +0200
@@ -43,7 +43,7 @@
                                    int y,
                                    const CGRect* src_rect) OVERRIDE;
   virtual CGContextRef GetBitmapContext() OVERRIDE;
-#elif defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
   virtual void DrawToNativeContext(PlatformSurface surface,
                                    int x,
                                    int y,
