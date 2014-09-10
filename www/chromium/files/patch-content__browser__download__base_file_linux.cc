--- content/browser/download/base_file_linux.cc.orig	2014-09-04 00:04:15 UTC
+++ content/browser/download/base_file_linux.cc
@@ -13,7 +13,9 @@
   DCHECK(BrowserThread::CurrentlyOn(BrowserThread::FILE));
   DCHECK(!detached_);
 
+#if !defined(OS_BSD)
   AddOriginMetadataToFile(full_path_, source_url_, referrer_url_);
+#endif
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
 
