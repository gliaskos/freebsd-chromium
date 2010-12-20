--- ./base/file_util_posix.cc.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./base/file_util_posix.cc	2010-12-20 20:41:37.000000000 +0100
@@ -814,7 +814,11 @@
 }
 
 bool GetShmemTempDir(FilePath* path) {
+#if defined(OS_LINUX)
   *path = FilePath("/dev/shm");
+#else
+  *path = FilePath("/tmp");
+#endif
   return true;
 }
 
