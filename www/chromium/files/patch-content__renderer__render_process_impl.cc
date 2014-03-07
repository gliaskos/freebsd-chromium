--- ./content/renderer/render_process_impl.cc.orig	2014-03-04 03:17:42.000000000 +0100
+++ ./content/renderer/render_process_impl.cc	2014-03-07 14:10:33.000000000 +0100
@@ -101,7 +101,7 @@
 
 bool RenderProcessImpl::InProcessPlugins() {
   const CommandLine& command_line = *CommandLine::ForCurrentProcess();
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Plugin processes require a UI message loop, and the Linux message loop
   // implementation only allows one UI loop per process.
   if (command_line.HasSwitch(switches::kInProcessPlugins))
@@ -164,7 +164,7 @@
   int width = rect.width();
   int height = rect.height();
   const size_t stride = skia::PlatformCanvasStrideForWidth(rect.width());
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   const size_t max_size = base::SysInfo::MaxSharedMemorySize();
 #else
   const size_t max_size = 0;
