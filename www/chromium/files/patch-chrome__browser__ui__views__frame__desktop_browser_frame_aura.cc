--- chrome/browser/ui/views/frame/desktop_browser_frame_aura.cc.orig	2015-03-11 07:33:50 UTC
+++ chrome/browser/ui/views/frame/desktop_browser_frame_aura.cc
@@ -21,7 +21,7 @@
 #include "ui/views/view.h"
 #include "ui/wm/core/visibility_controller.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "chrome/browser/shell_integration_linux.h"
 #endif
 
@@ -85,7 +85,7 @@
   views::Widget::InitParams params;
   params.native_widget = this;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Set up a custom WM_CLASS for some sorts of window types. This allows
   // task switchers in X11 environments to distinguish between main browser
   // windows and e.g app windows.
