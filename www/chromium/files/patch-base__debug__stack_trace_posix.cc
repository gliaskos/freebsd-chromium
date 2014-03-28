--- ./base/debug/stack_trace_posix.cc.orig	2014-03-26 21:14:51.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-03-28 10:57:58.000000000 +0100
@@ -471,7 +471,7 @@
 
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
-  count_ = std::max(backtrace(trace_, arraysize(trace_)), 0);
+  count_ = std::max<size_t>(backtrace(trace_, arraysize(trace_)), 0);
 }
 
 void StackTrace::Print() const {
