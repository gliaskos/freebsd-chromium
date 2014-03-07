--- ./base/process/process_metrics_freebsd.cc.orig	2014-03-05 22:24:30.000000000 +0100
+++ ./base/process/process_metrics_freebsd.cc	2014-03-07 23:57:25.000000000 +0100
@@ -4,6 +4,10 @@
 
 #include "base/process/process_metrics.h"
 
+#include "base/sys_info.h"
+
+#include <unistd.h> /* getpagesize() */
+
 namespace base {
 
 ProcessMetrics::ProcessMetrics(ProcessHandle process)
