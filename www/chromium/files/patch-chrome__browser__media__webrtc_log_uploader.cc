--- ./chrome/browser/media/webrtc_log_uploader.cc.orig	2014-03-26 21:15:39.000000000 +0100
+++ ./chrome/browser/media/webrtc_log_uploader.cc	2014-03-28 10:57:59.000000000 +0100
@@ -155,6 +155,8 @@
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif
