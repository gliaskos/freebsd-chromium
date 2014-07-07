--- ./base/process/process_metrics.h.orig	2014-06-30 21:01:38.000000000 +0200
+++ ./base/process/process_metrics.h	2014-07-07 15:12:46.000000000 +0200
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
