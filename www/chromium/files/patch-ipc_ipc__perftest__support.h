--- ipc/ipc_perftest_support.h.orig	2016-08-13 00:28:55.784764000 +0300
+++ ipc/ipc_perftest_support.h	2016-08-13 00:10:37.997830000 +0300
@@ -86,7 +86,7 @@
   bool affinity_set_ok_;
 #if defined(OS_WIN)
   DWORD_PTR old_affinity_;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   cpu_set_t old_cpuset_;
 #endif

