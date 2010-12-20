--- ./chrome/browser/ui/views/notifications/balloon_view.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/notifications/balloon_view.cc	2010-12-20 20:41:37.000000000 +0100
@@ -40,7 +40,7 @@
 #if defined(OS_WIN)
 #include "views/widget/widget_win.h"
 #endif
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
 #include "views/widget/widget_gtk.h"
 #endif
 
