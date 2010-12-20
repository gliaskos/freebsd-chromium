--- ./chrome/gpu/gpu_channel.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/gpu/gpu_channel.cc	2010-12-20 20:41:37.000000000 +0100
@@ -138,7 +138,7 @@
   // the GpuCommandBufferStub, we will create a child window within the view
   // HWND into which we will render.
   handle = view;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   ChildThread* gpu_thread = ChildThread::current();
   // Ask the browser for the view's XID.
   // TODO(piman): This assumes that it doesn't change. It can change however
