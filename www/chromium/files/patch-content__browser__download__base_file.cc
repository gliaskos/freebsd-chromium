--- ./content/browser/download/base_file.cc.orig	2014-06-30 21:01:35.000000000 +0200
+++ ./content/browser/download/base_file.cc	2014-07-07 15:12:47.000000000 +0200
@@ -204,7 +204,8 @@
 }
 
 // OS_WIN, OS_MACOSX and OS_LINUX have specialized implementations.
-#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX) && \
+    !defined(OS_BSD)
 DownloadInterruptReason BaseFile::AnnotateWithSourceInformation() {
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
