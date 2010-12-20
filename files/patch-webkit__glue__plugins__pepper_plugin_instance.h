--- ./webkit/glue/plugins/pepper_plugin_instance.h.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/glue/plugins/pepper_plugin_instance.h	2010-12-20 20:41:38.000000000 +0100
@@ -278,7 +278,7 @@
   // to keep the pixels valid until CGContextEndPage is called. We use this
   // variable to hold on to the pixels.
   scoped_refptr<ImageData> last_printed_page_;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   // On Linux, we always send all pages from the renderer to the browser.
   // So, if the plugin supports printPagesAsPDF we print the entire output
   // in one shot in the first call to PrintPage.
