--- chrome/browser/media/webrtc/webrtc_log_uploader.cc.orig	2017-06-05 19:03:02 UTC
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -343,6 +343,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif