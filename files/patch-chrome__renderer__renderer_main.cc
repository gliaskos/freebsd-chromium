--- ./chrome/renderer/renderer_main.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/renderer/renderer_main.cc	2011-01-07 14:17:11.000000000 +0100
@@ -269,7 +269,7 @@
   PepperPluginRegistry::GetInstance();
 
   {
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) && !defined(OS_FREEBSD)
     // TODO(markus): Check if it is OK to unconditionally move this
     // instruction down.
     RenderProcessImpl render_process;
@@ -279,7 +279,7 @@
     if (!no_sandbox) {
       run_loop = platform.EnableSandbox();
     }
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     RenderProcessImpl render_process;
     render_process.set_main_thread(new RenderThread());
 #endif
