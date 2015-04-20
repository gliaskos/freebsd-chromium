--- chrome/browser/chrome_content_browser_client.cc.orig	2015-04-17 13:26:07.236472000 -0400
+++ chrome/browser/chrome_content_browser_client.cc	2015-04-17 13:27:51.020815000 -0400
@@ -171,7 +171,7 @@
 #include "chrome/browser/media/protected_media_identifier_permission_context_factory.h"
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 #include "base/debug/leak_annotations.h"
 #include "components/crash/app/breakpad_linux.h"
 #include "components/crash/browser/crash_handler_host_linux.h"
@@ -446,7 +446,7 @@
   return false;
 }
 
-#if defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_MACOSX) && !defined(OS_BSD)
 breakpad::CrashHandlerHostLinux* CreateCrashHandlerHost(
     const std::string& process_type) {
   base::FilePath dumps_path;
@@ -1295,7 +1295,7 @@
     command_line->AppendSwitchASCII(switches::kMetricsClientID,
                                     client_info->client_id);
   }
-#elif defined(OS_POSIX)
+#elif defined(OS_POSIX) && !defined(OS_BSD)
   if (breakpad::IsCrashReporterEnabled()) {
     scoped_ptr<metrics::ClientInfo> client_info =
         GoogleUpdateSettings::LoadMetricsClientInfo();
@@ -2409,7 +2409,7 @@
   }
 }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 void ChromeContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
