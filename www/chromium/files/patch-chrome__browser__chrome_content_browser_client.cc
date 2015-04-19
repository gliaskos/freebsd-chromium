--- chrome/browser/chrome_content_browser_client.cc.orig	2015-04-17 13:26:07.236472000 -0400
+++ chrome/browser/chrome_content_browser_client.cc	2015-04-17 13:27:51.020815000 -0400
@@ -167,7 +167,7 @@
 #include "chrome/browser/chrome_browser_main_posix.h"
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 #include "base/debug/leak_annotations.h"
 #include "components/crash/app/breakpad_linux.h"
 #include "components/crash/browser/crash_handler_host_linux.h"
@@ -443,7 +443,7 @@
   return false;
 }
 
-#if defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX) && !defined(OS_BSD)
 breakpad::CrashHandlerHostLinux* CreateCrashHandlerHost(
     const std::string& process_type) {
   base::FilePath dumps_path;
@@ -1232,7 +1232,7 @@
 void ChromeContentBrowserClient::AppendExtraCommandLineSwitches(
     base::CommandLine* command_line,
     int child_process_id) {
-#if defined(OS_POSIX)
+#if defined(OS_POSIX) && !defined(OS_BSD)
   if (breakpad::IsCrashReporterEnabled()) {
     scoped_ptr<metrics::ClientInfo> client_info =
         GoogleUpdateSettings::LoadMetricsClientInfo();
@@ -2434,7 +2434,7 @@
   }
 }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 void ChromeContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
