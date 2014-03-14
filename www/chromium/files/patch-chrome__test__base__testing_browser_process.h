--- ./chrome/test/base/testing_browser_process.h.orig	2014-03-12 20:22:30.000000000 +0100
+++ ./chrome/test/base/testing_browser_process.h	2014-03-14 09:23:25.000000000 +0100
@@ -101,7 +101,7 @@
   virtual DownloadStatusUpdater* download_status_updater() OVERRIDE;
   virtual DownloadRequestLimiter* download_request_limiter() OVERRIDE;
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
   virtual void StartAutoupdateTimer() OVERRIDE {}
 #endif
 
