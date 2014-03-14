--- ./chrome/renderer/printing/print_web_view_helper.h.orig	2014-03-12 20:21:46.000000000 +0100
+++ ./chrome/renderer/printing/print_web_view_helper.h	2014-03-14 09:23:25.000000000 +0100
@@ -214,7 +214,7 @@
   void FinishFramePrinting();
 
   // Prints the page listed in |params|.
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX)
   void PrintPageInternal(const PrintMsg_PrintPage_Params& params,
                          const gfx::Size& canvas_size,
                          blink::WebFrame* frame,
