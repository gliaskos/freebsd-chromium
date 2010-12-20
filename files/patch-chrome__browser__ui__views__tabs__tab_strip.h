--- ./chrome/browser/ui/views/tabs/tab_strip.h.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/tabs/tab_strip.h	2010-12-20 20:41:37.000000000 +0100
@@ -19,7 +19,7 @@
 
 namespace views {
 class ImageView;
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
 class WidgetGtk;
 #elif defined(OS_WIN)
 class WidgetWin;
