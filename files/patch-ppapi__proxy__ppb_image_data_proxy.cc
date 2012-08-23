--- ./ppapi/proxy/ppb_image_data_proxy.cc.orig	2012-08-17 03:01:23.000000000 +0200
+++ ./ppapi/proxy/ppb_image_data_proxy.cc	2012-08-23 22:31:45.000000000 +0200
@@ -104,7 +104,7 @@
 ImageHandle ImageData::NullHandle() {
 #if defined(OS_WIN)
   return NULL;
-#elif defined(OS_MACOSX) || defined(OS_ANDROID)
+#elif defined(OS_MACOSX) || defined(OS_ANDROID) || defined(OS_FREEBSD)
   return ImageHandle();
 #else
   return 0;
@@ -114,7 +114,7 @@
 ImageHandle ImageData::HandleFromInt(int32_t i) {
 #if defined(OS_WIN)
     return reinterpret_cast<ImageHandle>(i);
-#elif defined(OS_MACOSX) || defined(OS_ANDROID)
+#elif defined(OS_MACOSX) || defined(OS_ANDROID) || defined(OS_FREEBSD)
     return ImageHandle(i, false);
 #else
     return static_cast<ImageHandle>(i);
