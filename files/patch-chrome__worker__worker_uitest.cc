--- ./chrome/worker/worker_uitest.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/worker/worker_uitest.cc	2010-12-20 20:41:37.000000000 +0100
@@ -84,7 +84,7 @@
     // The 1 is for the browser process.
     int number_of_processes = 1 + workers +
         (UITest::in_process_renderer() ? 0 : tabs);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     // On Linux, we also have a zygote process and a sandbox host process.
     number_of_processes += 2;
 #endif
