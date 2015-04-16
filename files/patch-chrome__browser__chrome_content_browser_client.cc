--- chrome/browser/chrome_content_browser_client.cc.orig	2014-10-10 09:15:30 UTC
+++ chrome/browser/chrome_content_browser_client.cc
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
@@ -500,7 +500,7 @@
 
   return -1;
 }
-#endif  // defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
 #if !defined(OS_CHROMEOS)
 GURL GetEffectiveURLForSignin(const GURL& url) {
@@ -1232,7 +1232,7 @@
 
 void ChromeContentBrowserClient::AppendExtraCommandLineSwitches(
     base::CommandLine* command_line,
     int child_process_id) {
-#if defined(OS_POSIX)
+#if defined(OS_POSIX) && !defined(OS_BSD)
   if (breakpad::IsCrashReporterEnabled()) {
     scoped_ptr<metrics::ClientInfo> client_info =
         GoogleUpdateSettings::LoadMetricsClientInfo();
@@ -1240,7 +1240,7 @@
                                     client_info ? client_info->client_id
                                                 : std::string());
   }
-#endif  // defined(OS_POSIX)
+#endif  // defined(OS_POSIX) && !defined(OS_BSD)
 
   if (logging::DialogsAreSuppressed())
     command_line->AppendSwitch(switches::kNoErrorDialogs);
@@ -2434,7 +2434,7 @@
   }
 }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 void ChromeContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
@@ -2518,7 +2518,7 @@
   }
 #endif  // defined(OS_ANDROID)
 }
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
 #if defined(OS_WIN)
 const wchar_t* ChromeContentBrowserClient::GetResourceDllName() {
