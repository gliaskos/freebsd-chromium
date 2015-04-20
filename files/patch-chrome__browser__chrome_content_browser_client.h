--- chrome/browser/chrome_content_browser_client.h.orig	2015-01-21 20:28:15 UTC
+++ chrome/browser/chrome_content_browser_client.h
@@ -266,7 +266,7 @@
       content::RenderFrameHost* render_frame_host,
       blink::WebPageVisibilityState* visibility_state) override;
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
