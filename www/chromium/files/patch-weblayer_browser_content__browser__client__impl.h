--- weblayer/browser/content_browser_client_impl.h.orig	2019-12-17 20:03:10 UTC
+++ weblayer/browser/content_browser_client_impl.h
@@ -75,12 +75,12 @@ class ContentBrowserClientImpl : public content::Conte
       blink::AssociatedInterfaceRegistry* associated_registry,
       content::RenderProcessHost* render_process_host) override;
 
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
       content::PosixFileDescriptorInfo* mappings) override;
-#endif  // defined(OS_LINUX) || defined(OS_ANDROID)
+#endif  // defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
 
 #if defined(OS_ANDROID)
   bool ShouldOverrideUrlLoading(int frame_tree_node_id,
