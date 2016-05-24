--- content/renderer/render_thread_impl.cc.orig	2016-05-11 19:02:22 UTC
+++ content/renderer/render_thread_impl.cc
@@ -1499,7 +1499,7 @@ media::GpuVideoAcceleratorFactories* Ren
     const bool enable_video_accelerator =
         !cmd_line->HasSwitch(switches::kDisableAcceleratedVideoDecode);
     const bool enable_gpu_memory_buffer_video_frames =
-#if defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
         !cmd_line->HasSwitch(switches::kDisableGpuMemoryBufferVideoFrames);
 #else
         cmd_line->HasSwitch(switches::kEnableGpuMemoryBufferVideoFrames);
