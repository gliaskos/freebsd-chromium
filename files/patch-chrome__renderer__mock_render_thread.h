--- ./chrome/renderer/mock_render_thread.h.orig	2010-12-13 12:04:30.000000000 +0100
+++ ./chrome/renderer/mock_render_thread.h	2010-12-20 20:41:37.000000000 +0100
@@ -105,7 +105,7 @@
                               base::SharedMemoryHandle* handle);
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   void OnAllocateTempFileForPrinting(base::FileDescriptor* renderer_fd,
                                      int* browser_fd);
   void OnTempFileForPrintingWritten(int browser_fd);
