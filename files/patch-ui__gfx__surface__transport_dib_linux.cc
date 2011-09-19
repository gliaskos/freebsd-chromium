--- ui/gfx/surface/transport_dib_linux.cc.orig	2011-09-19 03:11:44.000000000 +0300
+++ ui/gfx/surface/transport_dib_linux.cc	2011-09-19 03:11:53.000000000 +0300
@@ -50,10 +50,13 @@
   }
 
   void* address = shmat(shmkey, NULL /* desired address */, 0 /* flags */);
+  // On BSD we can't access the shared memory after is marked for deletion.
+#if !defined(OS_FREEBSD)
   // Here we mark the shared memory for deletion. Since we attached it in the
   // line above, it doesn't actually get deleted but, if we crash, this means
   // that the kernel will automatically clean it up for us.
   shmctl(shmkey, IPC_RMID, 0);
+#endif
   if (address == kInvalidAddress)
     return NULL;
 
