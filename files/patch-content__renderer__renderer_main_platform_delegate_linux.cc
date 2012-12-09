--- content/renderer/renderer_main_platform_delegate_linux.cc.orig	2012-11-27 10:01:25.000000000 +0200
+++ content/renderer/renderer_main_platform_delegate_linux.cc	2012-11-28 21:19:12.000000000 +0200
@@ -42,7 +42,9 @@
   //
   // The seccomp sandbox mode 1 (sandbox/linux/seccomp-legacy) and mode 2
   // (sandbox/linux/seccomp-bpf) are started in InitializeSandbox().
+#if !defined(OS_BSD)
   InitializeSandbox();
+#endif
   return true;
 }
 
