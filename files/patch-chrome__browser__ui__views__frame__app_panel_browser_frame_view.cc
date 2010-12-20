--- ./chrome/browser/ui/views/frame/app_panel_browser_frame_view.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/frame/app_panel_browser_frame_view.cc	2010-12-20 20:41:37.000000000 +0100
@@ -21,7 +21,7 @@
 #include "views/window/window.h"
 #include "views/window/window_resources.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "views/window/hit_test.h"
 #endif
 
