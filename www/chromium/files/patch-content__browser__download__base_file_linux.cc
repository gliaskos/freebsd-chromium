--- ./content/browser/download/base_file_linux.cc.orig	2014-03-05 22:24:06.000000000 +0100
+++ ./content/browser/download/base_file_linux.cc	2014-03-07 23:57:26.000000000 +0100
@@ -13,7 +13,9 @@
   DCHECK(BrowserThread::CurrentlyOn(BrowserThread::FILE));
   DCHECK(!detached_);
 
+#if !defined(OS_BSD)
   AddOriginMetadataToFile(full_path_, source_url_, referrer_url_);
+#endif
   return DOWNLOAD_INTERRUPT_REASON_NONE;
 }
 
