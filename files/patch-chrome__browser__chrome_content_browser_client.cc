--- ./chrome/browser/chrome_content_browser_client.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/chrome_content_browser_client.cc	2012-08-23 22:31:43.000000000 +0200
@@ -117,7 +117,7 @@
 #include "chrome/browser/chrome_browser_main_posix.h"
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_ANDROID)
 #include "base/linux_util.h"
 #include "chrome/browser/crash_handler_host_linuxish.h"
 #endif
