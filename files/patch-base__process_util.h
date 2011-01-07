--- ./base/process_util.h.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./base/process_util.h	2011-01-07 08:57:28.000000000 +0100
@@ -159,7 +159,7 @@
 // Win XP SP1 as well.
 ProcessId GetProcId(ProcessHandle process);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Returns the ID for the parent of the given process.
 ProcessId GetParentProcessId(ProcessHandle process);

