--- ./base/debug/stack_trace_posix.cc.orig	2014-02-20 21:28:47.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-02-24 17:23:44.000000000 +0100
@@ -14,6 +14,9 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <unistd.h>
+#if defined(OS_FREEBSD)
+#include <ucontext.h>
+#endif
 
 #include <ostream>
 
@@ -475,9 +478,15 @@
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
