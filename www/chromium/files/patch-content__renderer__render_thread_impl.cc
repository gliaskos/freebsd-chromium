--- content/renderer/render_thread_impl.cc.orig	Wed Mar 11 07:29:03 2015
+++ content/renderer/render_thread_impl.cc	Wed Mar 18 20:00:59 2015
@@ -638,7 +638,7 @@
     DCHECK_GT(num_raster_threads, 0);
     cc::TileTaskWorkerPool::SetNumWorkerThreads(num_raster_threads);
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     if (!command_line.HasSwitch(
             switches::kUseNormalPriorityForTileTaskWorkerThreads)) {
       cc::TileTaskWorkerPool::SetWorkerThreadPriority(
