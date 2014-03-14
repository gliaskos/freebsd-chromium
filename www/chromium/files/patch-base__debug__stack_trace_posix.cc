--- ./base/debug/stack_trace_posix.cc.orig	2014-03-12 20:21:44.000000000 +0100
+++ ./base/debug/stack_trace_posix.cc	2014-03-14 09:23:25.000000000 +0100
@@ -471,7 +471,7 @@
 
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
-  count_ = std::max(backtrace(trace_, arraysize(trace_)), 0);
+  count_ = std::max<size_t>(backtrace(trace_, arraysize(trace_)), 0);
 }
 
 void StackTrace::Print() const {
