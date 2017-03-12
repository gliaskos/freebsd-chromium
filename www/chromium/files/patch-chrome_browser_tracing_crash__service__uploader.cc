--- chrome/browser/tracing/crash_service_uploader.cc.orig	2017-02-02 02:02:49 UTC
+++ chrome/browser/tracing/crash_service_uploader.cc
@@ -156,6 +156,8 @@ void TraceCrashServiceUploader::DoUpload
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif
