--- base/process_util.h.orig	2011-03-20 22:02:04.328738287 +0200
+++ base/process_util.h	2011-03-20 22:02:04.464738533 +0200
@@ -161,7 +161,7 @@
 // Win XP SP1 as well.
 ProcessId GetProcId(ProcessHandle process);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Returns the ID for the parent of the given process.
 ProcessId GetParentProcessId(ProcessHandle process);
 
