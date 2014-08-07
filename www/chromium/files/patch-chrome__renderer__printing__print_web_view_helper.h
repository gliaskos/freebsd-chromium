--- ./chrome/renderer/printing/print_web_view_helper.h.orig	2014-07-15 21:01:14.000000000 +0200
+++ ./chrome/renderer/printing/print_web_view_helper.h	2014-07-20 18:13:08.000000000 +0200
@@ -201,7 +201,7 @@
   void FinishFramePrinting();
 
   // Prints the page listed in |params|.
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX)
   void PrintPageInternal(const PrintMsg_PrintPage_Params& params,
                          const gfx::Size& canvas_size,
                          blink::WebFrame* frame,
