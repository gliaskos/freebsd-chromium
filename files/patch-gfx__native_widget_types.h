--- ./gfx/native_widget_types.h.orig	2010-12-13 12:03:07.000000000 +0100
+++ ./gfx/native_widget_types.h	2011-01-07 14:17:11.000000000 +0100
@@ -97,7 +97,7 @@
 
 #if defined(OS_MACOSX)
 typedef NSImage NativeImageType;
-#elif defined(OS_LINUX) && !defined(TOOLKIT_VIEWS)
+#elif (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(TOOLKIT_VIEWS)
 typedef GdkPixbuf NativeImageType;
 #else
 typedef SkBitmap NativeImageType;
