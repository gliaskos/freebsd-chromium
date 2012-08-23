--- ./content/browser/renderer_host/backing_store_gtk.cc.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/renderer_host/backing_store_gtk.cc	2012-08-23 22:31:44.000000000 +0200
@@ -65,6 +65,9 @@
   XShmDetach(display, shminfo);
   XDestroyImage(image);
   shmdt(shminfo->shmaddr);
+#if defined(OS_FREEBSD)
+  shmctl(shminfo->shmid, IPC_RMID, 0);
+#endif
 }
 
 // So we don't don't want to call XSync(), which can block the UI loop for
@@ -527,7 +530,9 @@
     }
 
     void* mapped_memory = shmat(shminfo.shmid, NULL, SHM_RDONLY);
+#if !defined(OS_FREEBSD)
     shmctl(shminfo.shmid, IPC_RMID, 0);
+#endif
     if (mapped_memory == (void*)-1) {
       XDestroyImage(image);
       return false;
