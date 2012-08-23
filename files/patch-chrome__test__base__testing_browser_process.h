--- ./chrome/test/base/testing_browser_process.h.orig	2012-08-17 03:02:23.000000000 +0200
+++ ./chrome/test/base/testing_browser_process.h	2012-08-23 22:31:43.000000000 +0200
@@ -97,7 +97,7 @@
   virtual DownloadRequestLimiter* download_request_limiter() OVERRIDE;
   virtual bool plugin_finder_disabled() const OVERRIDE;
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
   virtual void StartAutoupdateTimer() OVERRIDE {}
 #endif
 
