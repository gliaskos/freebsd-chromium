--- content/ppapi_plugin/ppapi_blink_platform_impl.h.orig	2015-05-26 14:19:06.474211000 -0400
+++ content/ppapi_plugin/ppapi_blink_platform_impl.h	2015-05-26 14:19:17.566882000 -0400
@@ -50,7 +50,7 @@
                                  bool sync_dir);
 
  private:
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   class SandboxSupport;
   scoped_ptr<SandboxSupport> sandbox_support_;
 #endif
