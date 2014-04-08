--- ./content/renderer/render_process_impl.cc.orig	2014-04-02 21:03:26.000000000 +0200
+++ ./content/renderer/render_process_impl.cc	2014-04-04 01:39:18.000000000 +0200
@@ -155,7 +155,7 @@
   int width = rect.width();
   int height = rect.height();
   const size_t stride = skia::PlatformCanvasStrideForWidth(rect.width());
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   const size_t max_size = base::SysInfo::MaxSharedMemorySize();
 #else
   const size_t max_size = 0;
