--- ./chrome/renderer/pepper_scrollbar_widget.h.orig	2010-12-13 12:04:30.000000000 +0100
+++ ./chrome/renderer/pepper_scrollbar_widget.h	2010-12-20 20:41:37.000000000 +0100
@@ -38,7 +38,7 @@
   virtual void getTickmarks(WebKit::WebScrollbar*,
                             WebKit::WebVector<WebKit::WebRect>*) const;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   static void SetScrollbarColors(unsigned inactive_color,
                                  unsigned active_color,
                                  unsigned track_color);
