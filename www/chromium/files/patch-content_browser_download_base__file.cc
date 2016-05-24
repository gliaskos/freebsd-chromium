--- content/browser/download/base_file.cc.orig	2016-05-11 19:02:20 UTC
+++ content/browser/download/base_file.cc
@@ -216,7 +216,8 @@ void BaseFile::SetClientGuid(const std::
 }
 
 // OS_WIN, OS_MACOSX and OS_LINUX have specialized implementations.
-#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX) && \
+    !defined(OS_BSD)
 DownloadInterruptReason BaseFile::AnnotateWithSourceInformation() {
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
