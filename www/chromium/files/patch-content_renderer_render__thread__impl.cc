--- content/renderer/render_thread_impl.cc.orig	2019-09-09 21:55:17 UTC
+++ content/renderer/render_thread_impl.cc
@@ -183,12 +183,21 @@
 #include "mojo/public/cpp/bindings/message_dumper.h"
 #endif
 
+#if !defined(OS_BSD)
 #if defined(OS_MACOSX)
 #include <malloc/malloc.h>
 #else
 #include <malloc.h>
 #endif
+#endif
 
+#if defined(OS_BSD)
+#include <stddef.h>
+#include <stdint.h>
+#include <sys/param.h>
+#include <sys/sysctl.h>
+#endif
+
 using base::ThreadRestrictions;
 using blink::WebDocument;
 using blink::WebFrame;
@@ -897,7 +906,7 @@ void RenderThreadImpl::Init() {
   DCHECK(parsed_num_raster_threads) << string_value;
   DCHECK_GT(num_raster_threads, 0);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   categorized_worker_pool_->SetBackgroundingCallback(
       main_thread_scheduler_->DefaultTaskRunner(),
       base::BindOnce(
@@ -926,7 +935,7 @@ void RenderThreadImpl::Init() {
   base::DiscardableMemoryAllocator::SetInstance(
       discardable_shared_memory_manager_.get());
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   render_message_filter()->SetThreadPriority(
       ChildProcess::current()->io_thread_id(), base::ThreadPriority::DISPLAY);
 #endif
@@ -1306,7 +1315,7 @@ media::GpuVideoAcceleratorFactories* RenderThreadImpl:
       !cmd_line->HasSwitch(switches::kDisableGpuMemoryBufferVideoFrames);
 #else
       cmd_line->HasSwitch(switches::kEnableGpuMemoryBufferVideoFrames);
-#endif  // defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN)
+#endif  // defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   const bool enable_media_stream_gpu_memory_buffers =
       enable_gpu_memory_buffers &&
       base::FeatureList::IsEnabled(
