--- ./chrome/renderer/renderer_main.cc.orig	2010-12-16 02:11:59.000000000 +0100
+++ ./chrome/renderer/renderer_main.cc	2010-12-20 20:15:08.000000000 +0100
@@ -269,7 +269,7 @@
   PepperPluginRegistry::GetInstance();
 
   {
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) || defined(OS_FREEBSD)
     // TODO(markus): Check if it is OK to unconditionally move this
     // instruction down.
     RenderProcessImpl render_process;
@@ -281,7 +281,7 @@
     } else {
       LOG(ERROR) << "Running without renderer sandbox";
     }
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     RenderProcessImpl render_process;
     render_process.set_main_thread(new RenderThread());
 #endif
