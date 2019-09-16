--- chrome/browser/media/webrtc/webrtc_logging_handler_host.cc.orig	2019-09-09 21:55:09 UTC
+++ chrome/browser/media/webrtc/webrtc_logging_handler_host.cc
@@ -26,10 +26,10 @@
 #include "content/public/browser/render_process_host.h"
 #include "services/service_manager/public/cpp/connector.h"
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "content/public/browser/child_process_security_policy.h"
 #include "storage/browser/fileapi/isolated_context.h"
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 using webrtc_event_logging::WebRtcEventLogManager;
 
@@ -279,7 +279,7 @@ void WebRtcLoggingHandlerHost::StartEventLogging(
       web_app_id, callback);
 }
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 void WebRtcLoggingHandlerHost::GetLogsDirectory(
     const LogsDirectoryCallback& callback,
     const LogsDirectoryErrorCallback& error_callback) {
@@ -324,7 +324,7 @@ void WebRtcLoggingHandlerHost::GrantLogsDirectoryAcces
   base::SequencedTaskRunnerHandle::Get()->PostTask(
       FROM_HERE, base::BindOnce(callback, file_system.id(), registered_name));
 }
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD
 
 void WebRtcLoggingHandlerHost::OnRtpPacket(
     std::unique_ptr<uint8_t[]> packet_header,
