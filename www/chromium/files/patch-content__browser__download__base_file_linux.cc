--- ./content/browser/download/base_file_linux.cc.orig	2014-04-02 21:03:31.000000000 +0200
+++ ./content/browser/download/base_file_linux.cc	2014-04-04 01:39:18.000000000 +0200
@@ -13,7 +13,9 @@
   DCHECK(BrowserThread::CurrentlyOn(BrowserThread::FILE));
   DCHECK(!detached_);
 
+#if !defined(OS_BSD)
   AddOriginMetadataToFile(full_path_, source_url_, referrer_url_);
+#endif
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
 
