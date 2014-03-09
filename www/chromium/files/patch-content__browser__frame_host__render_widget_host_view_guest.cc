--- ./content/browser/frame_host/render_widget_host_view_guest.cc.orig	2014-03-05 22:24:07.000000000 +0100
+++ ./content/browser/frame_host/render_widget_host_view_guest.cc	2014-03-09 15:53:00.000000000 +0100
@@ -258,11 +258,11 @@
 
 gfx::NativeViewId RenderWidgetHostViewGuest::GetNativeViewId() const {
   if (!guest_)
-    return static_cast<gfx::NativeViewId>(NULL);
+    return (intptr_t)NULL;
 
   RenderWidgetHostView* rwhv = guest_->GetEmbedderRenderWidgetHostView();
   if (!rwhv)
-    return static_cast<gfx::NativeViewId>(NULL);
+    return (intptr_t)NULL;
   return rwhv->GetNativeViewId();
 }
 
