--- ./chrome/browser/browser_process_impl.cc.orig	2014-04-02 21:04:38.000000000 +0200
+++ ./chrome/browser/browser_process_impl.cc	2014-04-04 01:39:18.000000000 +0200
@@ -261,7 +261,7 @@
 
   ExtensionRendererState::GetInstance()->Shutdown();
 
-#if !defined(OS_ANDROID) && !defined(OS_IOS)
+#if !defined(OS_ANDROID) && !defined(OS_IOS) && !defined(OS_BSD)
   media_file_system_registry_.reset();
   // Remove the global instance of the Storage Monitor now. Otherwise the
   // FILE thread would be gone when we try to release it in the dtor and
