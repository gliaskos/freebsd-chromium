--- content/public/test/browser_test_base.cc.orig	2020-03-16 18:40:32 UTC
+++ content/public/test/browser_test_base.cc
@@ -98,6 +98,10 @@
 #include "ui/views/test/event_generator_delegate_mac.h"
 #endif
 
+#if defined(OS_FREEBSD)
+#include <sys/signal.h>
+#endif
+
 #if defined(OS_POSIX)
 #include "base/process/process_handle.h"
 #endif
