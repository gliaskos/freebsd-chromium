--- ./chrome/browser/chrome_content_browser_client.h.orig	2014-08-13 21:02:26.000000000 +0200
+++ ./chrome/browser/chrome_content_browser_client.h	2014-08-21 21:41:49.000000000 +0200
@@ -288,7 +288,7 @@
   virtual net::CookieStore* OverrideCookieStoreForRenderProcess(
       int render_process_id) OVERRIDE;
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   virtual void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
