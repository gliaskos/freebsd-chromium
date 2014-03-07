--- ./base/debug/stack_trace_posix.cc.orig	2014-03-05 22:24:31.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-03-07 23:57:25.000000000 +0100
@@ -14,6 +14,9 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <unistd.h>
+#if defined(OS_FREEBSD)
+#include <ucontext.h>
+#endif
 
 #include <ostream>
 
@@ -469,9 +472,15 @@
   // NOTE: This code MUST be async-signal safe (it's used by in-process
   // stack dumping signal handler). NO malloc or stdio is allowed here.
 
+#if defined(OS_FREEBSD)
+  // Disable backtrace for now, libexecinfo crashes in getframeaddr
+  // in release build / i386.
+  count_ = 0;
+#else
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
   count_ = std::max(backtrace(trace_, arraysize(trace_)), 0);
+#endif
 }
 
 void StackTrace::Print() const {
