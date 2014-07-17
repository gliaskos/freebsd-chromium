--- ./base/process/launch.h.orig	2014-06-30 21:01:38.000000000 +0200
+++ ./base/process/launch.h	2014-07-17 20:50:07.000000000 +0200
@@ -108,14 +108,14 @@
   // will be the same as its pid.
   bool new_process_group;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   // If non-zero, start the process using clone(), using flags as provided.
   int clone_flags;
 
   // By default, child processes will have the PR_SET_NO_NEW_PRIVS bit set. If
   // true, then this bit will not be set in the new child process.
   bool allow_new_privs;
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_FREEBSD)
 
 #if defined(OS_CHROMEOS)
   // If non-negative, the specified file descriptor will be set as the launched
