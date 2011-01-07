--- ./chrome/browser/renderer_host/browser_render_process_host.cc.orig	2010-12-13 12:04:26.000000000 +0100
+++ ./chrome/browser/renderer_host/browser_render_process_host.cc	2011-01-07 14:17:10.000000000 +0100
@@ -810,7 +810,7 @@
   HANDLE section = win_util::GetSectionFromProcess(
       dib_id.handle, GetHandle(), false /* read write */);
   return TransportDIB::Map(section);
-#elif defined(OS_MACOSX)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
   // On OSX, the browser allocates all DIBs and keeps a file descriptor around
   // for each.
   return widget_helper_->MapTransportDIB(dib_id);
