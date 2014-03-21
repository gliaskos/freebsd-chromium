--- ./base/debug/stack_trace_posix.cc.orig	2014-03-19 20:01:54.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-03-21 00:27:12.000000000 +0100
@@ -471,7 +471,7 @@
 
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
-  count_ = std::max(backtrace(trace_, arraysize(trace_)), 0);
+  count_ = std::max<size_t>(backtrace(trace_, arraysize(trace_)), 0);
 }
 
 void StackTrace::Print() const {
