--- content/renderer/render_thread_impl.cc.orig	2015-04-14 18:31:22.000000000 -0400
+++ content/renderer/render_thread_impl.cc	2015-04-28 09:20:49.024954000 -0400
@@ -671,7 +671,7 @@
       num_raster_threads = 1;
     cc::TileTaskWorkerPool::SetNumWorkerThreads(num_raster_threads);
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     if (!command_line.HasSwitch(
             switches::kUseNormalPriorityForTileTaskWorkerThreads)) {
       cc::TileTaskWorkerPool::SetWorkerThreadPriority(
