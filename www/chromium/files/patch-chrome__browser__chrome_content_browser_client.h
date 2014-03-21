--- ./chrome/browser/chrome_content_browser_client.h.orig	2014-03-19 20:02:53.000000000 +0100
+++ ./chrome/browser/chrome_content_browser_client.h	2014-03-21 00:27:12.000000000 +0100
@@ -255,7 +255,7 @@
       const base::FilePath& storage_partition_path,
       ScopedVector<fileapi::FileSystemBackend>* additional_backends) OVERRIDE;
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   virtual void GetAdditionalMappedFilesForChildProcess(
       const CommandLine& command_line,
       int child_process_id,
