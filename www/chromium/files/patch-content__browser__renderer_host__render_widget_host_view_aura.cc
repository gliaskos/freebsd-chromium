--- ./content/browser/renderer_host/render_widget_host_view_aura.cc.orig	2014-07-15 21:02:50.000000000 +0200
+++ ./content/browser/renderer_host/render_widget_host_view_aura.cc	2014-07-20 18:13:08.000000000 +0200
@@ -626,7 +626,7 @@
   if (host)
     return reinterpret_cast<gfx::NativeViewId>(host->GetAcceleratedWidget());
 #endif
-  return static_cast<gfx::NativeViewId>(NULL);
+  return static_cast<gfx::NativeViewId>(0);
 }
 
 gfx::NativeViewAccessible RenderWidgetHostViewAura::GetNativeViewAccessible() {
