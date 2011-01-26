--- chrome/gpu/gpu_channel.cc.orig	2011-01-25 12:41:15.000000000 +0100
+++ chrome/gpu/gpu_channel.cc	2011-01-26 14:38:40.000000000 +0100
@@ -148,7 +148,7 @@
   // offscreen rendering and the browser provides whichever platform specific
   // "render target" the GpuCommandBufferStub targets.
   handle = gfx::NativeViewFromId(view_id);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   ChildThread* gpu_thread = ChildThread::current();
   // Ask the browser for the view's XID.
   // TODO(piman): This assumes that it doesn't change. It can change however
