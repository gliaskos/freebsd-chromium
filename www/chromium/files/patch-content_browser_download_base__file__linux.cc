--- content/browser/download/base_file_linux.cc.orig	2016-05-11 19:02:20 UTC
+++ content/browser/download/base_file_linux.cc
@@ -13,7 +13,9 @@ DownloadInterruptReason BaseFile::Annota
   DCHECK_CURRENTLY_ON(BrowserThread::FILE);
   DCHECK(!detached_);
 
+#if !defined(OS_BSD)
   AddOriginMetadataToFile(full_path_, source_url_, referrer_url_);
+#endif
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
 
