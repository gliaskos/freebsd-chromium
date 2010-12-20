--- ./chrome/browser/renderer_host/render_widget_host_unittest.cc.orig	2010-12-13 12:04:26.000000000 +0100
+++ ./chrome/browser/renderer_host/render_widget_host_unittest.cc	2010-12-20 20:41:37.000000000 +0100
@@ -407,7 +407,7 @@
 
 // Tests setting custom background
 TEST_F(RenderWidgetHostTest, Background) {
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
   scoped_ptr<RenderWidgetHostView> view(
       RenderWidgetHostView::CreateViewForWidget(host_.get()));
   host_->set_view(view.get());
