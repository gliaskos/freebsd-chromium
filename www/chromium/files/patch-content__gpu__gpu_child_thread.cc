--- content/gpu/gpu_child_thread.cc.orig	2014-09-11 08:58:47.000000000 +0200
+++ content/gpu/gpu_child_thread.cc	2014-09-12 12:33:25.000000000 +0200
@@ -179,6 +179,7 @@
 }
 
 void GpuChildThread::OnCollectGraphicsInfo() {
+#if !defined(OS_FREEBSD)
 #if defined(OS_WIN)
   // GPU full info collection should only happen on un-sandboxed GPU process
   // or single process/in-process gpu mode on Windows.
@@ -218,6 +219,7 @@
     base::MessageLoop::current()->Quit();
   }
 #endif  // OS_WIN
+#endif  // XXX(rene) !FreeBSD
 }
 
 void GpuChildThread::OnGetVideoMemoryUsageStats() {
