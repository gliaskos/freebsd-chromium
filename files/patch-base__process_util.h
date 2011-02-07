--- base/process_util.h.orig	2011-01-29 10:49:10.000000000 +0100
+++ base/process_util.h	2011-02-07 21:26:16.000000000 +0100
@@ -27,6 +27,9 @@
 #include <limits.h>
 #include <sys/types.h>
 #endif
+#if defined(OS_FREEBSD)
+struct kinfo_proc;
+#endif
 
 #include <list>
 #include <string>
@@ -159,7 +162,7 @@
 // Win XP SP1 as well.
 ProcessId GetProcId(ProcessHandle process);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Returns the ID for the parent of the given process.
 ProcessId GetParentProcessId(ProcessHandle process);
 
@@ -170,7 +173,8 @@
 // CPU-related ticks.  Returns -1 on parse error.
 // Exposed for testing.
 int ParseProcStatCPU(const std::string& input);
-
+#endif
+#if defined(OS_LINUX)
 static const char kAdjustOOMScoreSwitch[] = "--adjust-oom-score";
 
 // This adjusts /proc/process/oom_adj so the Linux OOM killer will prefer
@@ -432,7 +436,7 @@
 #if defined(OS_WIN)
   HANDLE snapshot_;
   bool started_iteration_;
-#elif defined(OS_MACOSX)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
   std::vector<kinfo_proc> kinfo_procs_;
   size_t index_of_kinfo_proc_;
 #elif defined(OS_POSIX)
