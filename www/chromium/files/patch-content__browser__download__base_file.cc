--- ./content/browser/download/base_file.cc.orig	2014-03-12 20:23:13.000000000 +0100
+++ ./content/browser/download/base_file.cc	2014-03-14 09:23:25.000000000 +0100
@@ -216,7 +216,8 @@
 }
 
 // OS_WIN, OS_MACOSX and OS_LINUX have specialized implementations.
-#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX) && \
+    !defined(OS_BSD)
 DownloadInterruptReason BaseFile::AnnotateWithSourceInformation() {
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
