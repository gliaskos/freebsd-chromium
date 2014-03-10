--- ./base/debug/stack_trace_posix.cc.orig	2014-03-05 22:24:31.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-03-10 12:00:06.000000000 +0100
@@ -471,7 +471,7 @@
 
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
-  count_ = std::max(backtrace(trace_, arraysize(trace_)), 0);
+  count_ = std::max<size_t>(backtrace(trace_, arraysize(trace_)), 0);
 }
 
 void StackTrace::Print() const {
