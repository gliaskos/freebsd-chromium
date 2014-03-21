--- ./content/renderer/render_process_impl.cc.orig	2014-03-19 20:01:20.000000000 +0100
+++ ./content/renderer/render_process_impl.cc	2014-03-21 00:27:12.000000000 +0100
@@ -155,7 +155,7 @@
   int width = rect.width();
   int height = rect.height();
   const size_t stride = skia::PlatformCanvasStrideForWidth(rect.width());
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   const size_t max_size = base::SysInfo::MaxSharedMemorySize();
 #else
   const size_t max_size = 0;
