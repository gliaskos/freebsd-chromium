--- ipc/ipc_perftest_support.cc.orig	2016-08-13 00:30:05.708625000 +0300
+++ ipc/ipc_perftest_support.cc	2016-08-13 00:10:54.965169000 +0300
@@ -358,7 +358,7 @@
   const DWORD_PTR thread_mask = static_cast<DWORD_PTR>(1) << cpu_number;
   old_affinity_ = SetThreadAffinityMask(GetCurrentThread(), thread_mask);
   affinity_set_ok_ = old_affinity_ != 0;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   cpu_set_t cpuset;
   CPU_ZERO(&cpuset);
   CPU_SET(cpu_number, &cpuset);
@@ -378,7 +378,7 @@
 #if defined(OS_WIN)
   auto set_result = SetThreadAffinityMask(GetCurrentThread(), old_affinity_);
   DCHECK_NE(0u, set_result);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   auto set_result = sched_setaffinity(0, sizeof(old_cpuset_), &old_cpuset_);
   DCHECK_EQ(0, set_result);
 #endif
