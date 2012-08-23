--- ./chrome/browser/chrome_browser_main_posix.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/chrome_browser_main_posix.cc	2012-08-23 22:31:43.000000000 +0200
@@ -238,7 +238,13 @@
     g_shutdown_pipe_read_fd = pipefd[0];
     g_shutdown_pipe_write_fd = pipefd[1];
 #if !defined(ADDRESS_SANITIZER)
+#if defined(OS_FREEBSD)
+    // PTHREAD_STACK_MIN causes chromium to crash under FreeBSD,
+    // we request the default pthread stack size by specifying 0 here.
+    const size_t kShutdownDetectorThreadStackSize = 0;
+#else
     const size_t kShutdownDetectorThreadStackSize = PTHREAD_STACK_MIN;
+#endif
 #else
     // ASan instrumentation bloats the stack, so we need to increase the stack
     // size to avoid hitting the guard page.
