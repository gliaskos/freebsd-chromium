--- ./content/renderer/render_widget.cc.orig	2012-08-17 03:01:28.000000000 +0200
+++ ./content/renderer/render_widget.cc	2012-08-23 22:31:44.000000000 +0200
@@ -1410,7 +1410,7 @@
       // Close our unused handle.
 #if defined(OS_WIN)
       ::CloseHandle(dib_handle);
-#elif defined(OS_MACOSX)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
       base::SharedMemory::CloseHandle(dib_handle);
 #endif
     }
