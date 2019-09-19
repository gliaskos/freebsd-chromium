--- headless/lib/browser/headless_content_browser_client.cc.orig	2019-09-09 21:55:18 UTC
+++ headless/lib/browser/headless_content_browser_client.cc
@@ -179,7 +179,7 @@ HeadlessContentBrowserClient::GetGeneratedCodeCacheSet
   return content::GeneratedCodeCacheSettings(true, 0, context->GetPath());
 }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 void HeadlessContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
@@ -190,7 +190,7 @@ void HeadlessContentBrowserClient::GetAdditionalMapped
     mappings->Share(service_manager::kCrashDumpSignal, crash_signal_fd);
 #endif  // defined(HEADLESS_USE_BREAKPAD)
 }
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
 void HeadlessContentBrowserClient::AppendExtraCommandLineSwitches(
     base::CommandLine* command_line,
