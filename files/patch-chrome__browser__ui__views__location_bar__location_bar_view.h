--- ./chrome/browser/ui/views/location_bar/location_bar_view.h.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/location_bar/location_bar_view.h	2010-12-20 20:41:37.000000000 +0100
@@ -401,7 +401,7 @@
   // crash.
   TemplateURLModel* template_url_model_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   scoped_ptr<AccessibleWidgetHelper> accessible_widget_helper_;
 #endif
 
