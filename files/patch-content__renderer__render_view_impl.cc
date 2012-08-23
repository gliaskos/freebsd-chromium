--- ./content/renderer/render_view_impl.cc.orig	2012-08-17 03:01:28.000000000 +0200
+++ ./content/renderer/render_view_impl.cc	2012-08-23 22:31:44.000000000 +0200
@@ -670,7 +670,7 @@
     file_chooser_completions_.pop_front();
   }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Destroy all fake plugin window handles on the browser side.
   while (!fake_plugin_window_handles_.empty()) {
     // Make sure no NULL plugin window handles were inserted into this list.
@@ -1846,7 +1846,7 @@
 }
 
 bool RenderViewImpl::isSmartInsertDeleteEnabled() {
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   return true;
 #else
   return false;
@@ -5411,7 +5411,7 @@
 }
 #endif
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 void RenderViewImpl::PluginFocusChanged(bool focused, int plugin_id) {
   Send(new ViewHostMsg_PluginFocusChanged(routing_id(), focused, plugin_id));
 }
