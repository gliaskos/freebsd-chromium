--- ./chrome/browser/media/webrtc_log_uploader.cc.orig	2014-03-04 03:17:05.000000000 +0100
+++ ./chrome/browser/media/webrtc_log_uploader.cc	2014-03-07 14:10:32.000000000 +0100
@@ -155,6 +155,8 @@
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
   // This file should not be compiled for other platforms.
   COMPILE_ASSERT(false);
