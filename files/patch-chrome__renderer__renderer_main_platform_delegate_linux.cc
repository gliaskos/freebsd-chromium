--- ./chrome/renderer/renderer_main_platform_delegate_linux.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/renderer/renderer_main_platform_delegate_linux.cc	2011-01-07 14:17:11.000000000 +0100
@@ -36,7 +36,7 @@
   // The seccomp sandbox is started in the renderer.
   // http://code.google.com/p/seccompsandbox/
 #if defined(ARCH_CPU_X86_FAMILY) && !defined(CHROMIUM_SELINUX) && \
-    !defined(__clang__)
+    !defined(__clang__) && !defined(OS_FREEBSD)
   // N.b. SupportsSeccompSandbox() returns a cached result, as we already
   // called it earlier in the zygote. Thus, it is OK for us to not pass in
   // a file descriptor for "/proc".
