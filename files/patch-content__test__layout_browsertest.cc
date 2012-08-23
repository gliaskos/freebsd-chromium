--- ./content/test/layout_browsertest.cc.orig	2012-08-17 03:01:26.000000000 +0200
+++ ./content/test/layout_browsertest.cc	2012-08-23 22:31:44.000000000 +0200
@@ -28,6 +28,8 @@
 static const char kPlatformName[] = "chromium-linux";
 #elif defined(OS_OPENBSD)
 static const char kPlatformName[] = "chromium-openbsd";
+#elif defined(OS_FREEBSD)
+static const char kPlatformName[] = "chromium-freebsd";
 #else
 #error No known OS defined
 #endif
