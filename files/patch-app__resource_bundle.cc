--- ./app/resource_bundle.cc.orig	2010-12-13 12:03:02.000000000 +0100
+++ ./app/resource_bundle.cc	2010-12-20 20:41:37.000000000 +0100
@@ -228,7 +228,7 @@
 #if defined(OS_MACOSX)
   return rb.GetNSImageNamed(resource_id);
 #elif defined(USE_X11) && !defined(TOOLKIT_VIEWS)
-  return rb.GetPixbufNamed(resource_id);
+  return (gfx::NativeImage)rb.GetPixbufNamed(resource_id);
 #else
   return rb.GetBitmapNamed(resource_id);
 #endif
