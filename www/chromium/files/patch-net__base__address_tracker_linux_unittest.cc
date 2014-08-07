--- ./net/base/address_tracker_linux_unittest.cc.orig	2014-07-15 21:02:58.000000000 +0200
+++ ./net/base/address_tracker_linux_unittest.cc	2014-07-20 18:13:09.000000000 +0200
@@ -4,7 +4,11 @@
 
 #include "net/base/address_tracker_linux.h"
 
+#if defined(__linux__)
 #include <linux/if.h>
+#else
+#include <net/if.h>
+#endif
 
 #include <vector>
 
