--- ./base/process/process_metrics_freebsd.cc.orig	2014-04-02 21:03:56.000000000 +0200
+++ ./base/process/process_metrics_freebsd.cc	2014-04-04 01:39:18.000000000 +0200
@@ -4,6 +4,10 @@
 
 #include "base/process/process_metrics.h"
 
+#include "base/sys_info.h"
+
+#include <unistd.h> /* getpagesize() */
+
 namespace base {
 
 ProcessMetrics::ProcessMetrics(ProcessHandle process)
