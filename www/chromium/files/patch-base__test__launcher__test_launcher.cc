--- ./base/test/launcher/test_launcher.cc.orig	2014-06-30 21:01:40.000000000 +0200
+++ ./base/test/launcher/test_launcher.cc	2014-07-01 22:46:25.000000000 +0200
@@ -40,6 +40,10 @@
 #include "base/mac/scoped_nsautorelease_pool.h"
 #endif
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 namespace base {
 
 // See https://groups.google.com/a/chromium.org/d/msg/chromium-dev/nkdTP7sstSc/uT3FaE_sgkAJ .
