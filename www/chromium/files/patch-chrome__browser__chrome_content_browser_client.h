--- ./chrome/browser/chrome_content_browser_client.h.orig	2014-03-05 22:24:51.000000000 +0100
+++ ./chrome/browser/chrome_content_browser_client.h	2014-03-07 23:57:25.000000000 +0100
@@ -255,7 +255,7 @@
       const base::FilePath& storage_partition_path,
       ScopedVector<fileapi::FileSystemBackend>* additional_backends) OVERRIDE;
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   virtual void GetAdditionalMappedFilesForChildProcess(
       const CommandLine& command_line,
       int child_process_id,
