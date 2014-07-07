--- ./base/process/process_metrics_freebsd.cc.orig	2014-06-30 21:01:38.000000000 +0200
+++ ./base/process/process_metrics_freebsd.cc	2014-07-07 15:12:46.000000000 +0200
@@ -10,6 +10,8 @@
 
 #include "base/sys_info.h"
 
+#include <unistd.h> /* getpagesize() */
+
 namespace base {
 
 ProcessMetrics::ProcessMetrics(ProcessHandle process)
