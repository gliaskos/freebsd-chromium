--- ./webkit/plugins/ppapi/ppapi_plugin_instance.cc.orig	2012-08-17 03:01:15.000000000 +0200
+++ ./webkit/plugins/ppapi/ppapi_plugin_instance.cc	2012-08-23 22:31:45.000000000 +0200
@@ -1465,7 +1465,7 @@
 #endif  // defined(OS_WIN)
 
   bool ret = false;
-#if defined(OS_LINUX) || (defined(OS_MACOSX) && defined(USE_SKIA))
+#if defined(OS_LINUX) || (defined(OS_MACOSX) && defined(USE_SKIA)) || defined(OS_FREEBSD)
   // On Linux we just set the final bits in the native metafile
   // (NativeMetafile and PreviewMetafile must have compatible formats,
   // i.e. both PDF for this to work).
