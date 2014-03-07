--- ./chrome/browser/media/webrtc_log_uploader.cc.orig	2014-03-05 22:24:51.000000000 +0100
+++ ./chrome/browser/media/webrtc_log_uploader.cc	2014-03-07 23:57:26.000000000 +0100
@@ -155,6 +155,8 @@
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
   // This file should not be compiled for other platforms.
   COMPILE_ASSERT(false);
