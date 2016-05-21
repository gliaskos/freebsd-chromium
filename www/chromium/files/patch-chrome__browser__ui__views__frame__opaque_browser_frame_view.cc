--- chrome/browser/ui/views/frame/opaque_browser_frame_view.cc.orig	2016-05-11 15:02:16.000000000 -0400
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.cc	2016-05-19 20:06:58.141477000 -0400
@@ -53,7 +53,7 @@
 #include "ui/views/window/frame_background.h"
 #include "ui/views/window/window_shape.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "ui/views/controls/menu/menu_runner.h"
 #endif
 
@@ -311,7 +311,7 @@
 void OpaqueBrowserFrameView::OnMenuButtonClicked(views::MenuButton* source,
                                                  const gfx::Point& point,
                                                  const ui::Event* event) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   views::MenuRunner menu_runner(frame()->GetSystemMenuModel(),
                                 views::MenuRunner::HAS_MNEMONICS);
   ignore_result(menu_runner.RunMenuAt(browser_view()->GetWidget(),
