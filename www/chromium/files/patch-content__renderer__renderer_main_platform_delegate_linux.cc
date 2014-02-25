--- ./content/renderer/renderer_main_platform_delegate_linux.cc.orig	2014-02-20 21:28:18.000000000 +0100
+++ ./content/renderer/renderer_main_platform_delegate_linux.cc	2014-02-24 17:23:44.000000000 +0100
@@ -50,11 +50,14 @@
   // http://code.google.com/p/chromium/wiki/LinuxSUIDSandbox
   //
   // Anything else is started in InitializeSandbox().
+#if !defined(OS_BSD)
   LinuxSandbox::InitializeSandbox();
+#endif
   return true;
 }
 
 void RendererMainPlatformDelegate::RunSandboxTests(bool no_sandbox) {
+#if !defined(OS_BSD)
   // The LinuxSandbox class requires going through initialization before
   // GetStatus() and others can be used.  When we are not launched through the
   // Zygote, this initialization will only happen in the renderer process if
@@ -89,6 +92,7 @@
     CHECK_EQ(errno, EPERM);
   }
 #endif  // __x86_64__
+#endif
 }
 
 }  // namespace content
