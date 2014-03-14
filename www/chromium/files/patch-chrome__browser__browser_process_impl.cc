--- ./chrome/browser/browser_process_impl.cc.orig	2014-03-12 20:22:03.000000000 +0100
+++ ./chrome/browser/browser_process_impl.cc	2014-03-14 09:23:25.000000000 +0100
@@ -261,7 +261,7 @@
 
   ExtensionRendererState::GetInstance()->Shutdown();
 
-#if !defined(OS_ANDROID) && !defined(OS_IOS)
+#if !defined(OS_ANDROID) && !defined(OS_IOS) && !defined(OS_BSD)
   media_file_system_registry_.reset();
   // Remove the global instance of the Storage Monitor now. Otherwise the
   // FILE thread would be gone when we try to release it in the dtor and
