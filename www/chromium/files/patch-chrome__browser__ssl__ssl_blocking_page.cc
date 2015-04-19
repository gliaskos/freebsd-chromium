--- chrome/browser/ssl/ssl_blocking_page.cc.orig	2015-01-21 20:28:15 UTC
+++ chrome/browser/ssl/ssl_blocking_page.cc
@@ -236,7 +236,7 @@
   // iOS does not have a way to launch the date and time settings.
   NOTREACHED();
 
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   struct ClockCommand {
     const char* pathname;
     const char* argument;
