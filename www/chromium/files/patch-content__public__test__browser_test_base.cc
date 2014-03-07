--- ./content/public/test/browser_test_base.cc.orig	2014-03-05 22:24:03.000000000 +0100
+++ ./content/public/test/browser_test_base.cc	2014-03-07 23:57:26.000000000 +0100
@@ -4,6 +4,10 @@
 
 #include "content/public/test/browser_test_base.h"
 
+#if defined(OS_FREEBSD)
+#include <sys/signal.h>
+#endif
+
 #include "base/bind.h"
 #include "base/command_line.h"
 #include "base/debug/stack_trace.h"
