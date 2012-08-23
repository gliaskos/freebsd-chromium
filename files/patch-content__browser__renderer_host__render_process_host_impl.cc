--- ./content/browser/renderer_host/render_process_host_impl.cc.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/renderer_host/render_process_host_impl.cc	2012-08-23 22:31:44.000000000 +0200
@@ -805,7 +805,7 @@
                   STANDARD_RIGHTS_REQUIRED | FILE_MAP_READ | FILE_MAP_WRITE,
                   FALSE, 0);
   return TransportDIB::Map(section);
-#elif defined(OS_MACOSX)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
   // On OSX, the browser allocates all DIBs and keeps a file descriptor around
   // for each.
   return widget_helper_->MapTransportDIB(dib_id);
