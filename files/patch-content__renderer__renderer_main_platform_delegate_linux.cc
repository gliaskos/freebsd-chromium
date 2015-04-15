--- content/renderer/renderer_main_platform_delegate_linux.cc.orig	2014-10-10 08:54:15 UTC
+++ content/renderer/renderer_main_platform_delegate_linux.cc
@@ -35,6 +35,7 @@
   // http://code.google.com/p/chromium/wiki/LinuxSUIDSandbox
   //
   // Anything else is started in InitializeSandbox().
+#if !defined(OS_BSD)
   LinuxSandbox::InitializeSandbox();
   // about:sandbox uses a value returned from LinuxSandbox::GetStatus() before
   // any renderer has been started.
@@ -61,6 +62,7 @@ bool RendererMainPlatformDelegate::EnableSandbox() {
     CHECK_EQ(errno, EPERM);
   }
 #endif  // __x86_64__
+#endif
 
   return true;
 }
