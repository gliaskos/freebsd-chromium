--- ./ui/base/x/x11_util.cc.orig	2012-08-17 03:02:28.000000000 +0200
+++ ./ui/base/x/x11_util.cc	2012-08-23 22:31:45.000000000 +0200
@@ -315,6 +315,12 @@
 static SharedMemorySupport DoQuerySharedMemorySupport(Display* dpy) {
   int dummy;
   Bool pixmaps_supported;
+
+#if defined(OS_FREEBSD)
+  if (!CommandLine::ForCurrentProcess()->HasSwitch("enable-xshm"))
+    return SHARED_MEMORY_NONE;
+#endif
+
   // Query the server's support for XSHM.
   if (!XShmQueryVersion(dpy, &dummy, &dummy, &pixmaps_supported))
     return SHARED_MEMORY_NONE;
@@ -337,8 +343,6 @@
   if (shmkey == -1)
     return SHARED_MEMORY_NONE;
   void* address = shmat(shmkey, NULL, 0);
-  // Mark the shared memory region for deletion
-  shmctl(shmkey, IPC_RMID, NULL);
 
   XShmSegmentInfo shminfo;
   memset(&shminfo, 0, sizeof(shminfo));
@@ -350,6 +354,7 @@
   if (gdk_error_trap_pop())
     result = false;
   shmdt(address);
+  shmctl(shmkey, IPC_RMID, NULL);
   if (!result)
     return SHARED_MEMORY_NONE;
 
