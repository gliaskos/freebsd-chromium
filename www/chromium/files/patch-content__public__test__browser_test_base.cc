--- ./content/public/test/browser_test_base.cc.orig	2014-06-30 21:01:31.000000000 +0200
+++ ./content/public/test/browser_test_base.cc	2014-07-07 15:12:48.000000000 +0200
@@ -4,6 +4,10 @@
 
 #include "content/public/test/browser_test_base.h"
 
+#if defined(OS_FREEBSD)
+#include <sys/signal.h>
+#endif
+
 #include "base/bind.h"
 #include "base/command_line.h"
 #include "base/debug/stack_trace.h"
