--- chrome/browser/ui/views/frame/opaque_browser_frame_view.cc.orig	2019-03-11 22:00:54 UTC
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.cc
@@ -49,7 +49,7 @@
 #include "ui/views/window/vector_icons/vector_icons.h"
 #include "ui/views/window/window_shape.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "ui/views/controls/menu/menu_runner.h"
 #endif
 
@@ -356,7 +356,7 @@ void OpaqueBrowserFrameView::ButtonPressed(views::Butt
 void OpaqueBrowserFrameView::OnMenuButtonClicked(views::MenuButton* source,
                                                  const gfx::Point& point,
                                                  const ui::Event* event) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   views::MenuRunner menu_runner(frame()->GetSystemMenuModel(),
                                 views::MenuRunner::HAS_MNEMONICS);
   menu_runner.RunMenuAt(browser_view()->GetWidget(), window_icon_,
