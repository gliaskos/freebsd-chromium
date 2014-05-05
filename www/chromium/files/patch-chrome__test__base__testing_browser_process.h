--- ./chrome/test/base/testing_browser_process.h.orig	2014-04-30 22:42:44.000000000 +0200
+++ ./chrome/test/base/testing_browser_process.h	2014-05-04 14:38:46.000000000 +0200
@@ -101,7 +101,7 @@
   virtual DownloadStatusUpdater* download_status_updater() OVERRIDE;
   virtual DownloadRequestLimiter* download_request_limiter() OVERRIDE;
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
   virtual void StartAutoupdateTimer() OVERRIDE {}
 #endif
 
