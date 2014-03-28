--- ./base/process/process_metrics.h.orig	2014-03-26 21:14:52.000000000 +0100
+++ ./base/process/process_metrics.h	2014-03-28 10:57:59.000000000 +0100
@@ -17,6 +17,13 @@
 #include "base/time/time.h"
 #include "base/values.h"
 
+#if defined(OS_BSD)
+#include <kvm.h>
+#include <sys/param.h>
+#include <sys/sysctl.h>
+#include <sys/user.h>
+#endif
+
 #if defined(OS_MACOSX)
 #include <mach/mach.h>
 #endif
