--- ./base/debug/stack_trace_posix.cc.orig	2012-08-17 03:01:50.000000000 +0200
+++ ./base/debug/stack_trace_posix.cc	2012-08-23 22:31:42.000000000 +0200
@@ -153,6 +153,11 @@
     count_ = 0;
     return;
   }
+#elif defined(OS_FREEBSD)
+  // Disable backtrace for now, libexecinfo crashes in getframeaddr
+  // in release build / i386.
+  count_ = 0;
+  return;
 #endif
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
