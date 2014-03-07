--- ./content/browser/download/base_file.cc.orig	2014-03-05 22:24:06.000000000 +0100
+++ ./content/browser/download/base_file.cc	2014-03-07 23:57:26.000000000 +0100
@@ -216,7 +216,8 @@
 }
 
 // OS_WIN, OS_MACOSX and OS_LINUX have specialized implementations.
-#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX) && \
+    !defined(OS_BSD)
 DownloadInterruptReason BaseFile::AnnotateWithSourceInformation() {
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
