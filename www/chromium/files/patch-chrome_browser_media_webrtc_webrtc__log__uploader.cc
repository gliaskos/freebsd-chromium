--- chrome/browser/media/webrtc/webrtc_log_uploader.cc.orig	2019-09-09 21:55:09 UTC
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -361,6 +361,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif
