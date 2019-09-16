--- gpu/ipc/service/gpu_watchdog_thread.h.orig	2019-09-09 21:55:18 UTC
+++ gpu/ipc/service/gpu_watchdog_thread.h
@@ -228,8 +228,10 @@ class GPU_IPC_SERVICE_EXPORT GpuWatchdogThreadImplV1
   XDisplay* display_;
   gfx::AcceleratedWidget window_;
   XAtom atom_;
+#if !defined(OS_BSD)
   FILE* tty_file_;
   int host_tty_;
+#endif
 #endif
 
   base::WeakPtrFactory<GpuWatchdogThreadImplV1> weak_factory_{this};
