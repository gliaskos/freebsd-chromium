--- ./chrome/test/base/testing_browser_process.h.orig	2014-03-26 21:15:37.000000000 +0100
+++ ./chrome/test/base/testing_browser_process.h	2014-03-28 10:57:59.000000000 +0100
@@ -101,7 +101,7 @@
   virtual DownloadStatusUpdater* download_status_updater() OVERRIDE;
   virtual DownloadRequestLimiter* download_request_limiter() OVERRIDE;
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
   virtual void StartAutoupdateTimer() OVERRIDE {}
 #endif
 
