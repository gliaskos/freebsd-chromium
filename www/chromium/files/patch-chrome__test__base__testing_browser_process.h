--- ./chrome/test/base/testing_browser_process.h.orig	2014-02-20 21:27:20.000000000 +0100
+++ ./chrome/test/base/testing_browser_process.h	2014-02-24 17:23:44.000000000 +0100
@@ -102,7 +102,7 @@
   virtual DownloadStatusUpdater* download_status_updater() OVERRIDE;
   virtual DownloadRequestLimiter* download_request_limiter() OVERRIDE;
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
   virtual void StartAutoupdateTimer() OVERRIDE {}
 #endif
 
