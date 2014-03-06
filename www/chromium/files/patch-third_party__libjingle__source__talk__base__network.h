--- ./third_party/libjingle/source/talk/base/network.h.orig	2014-02-20 21:29:12.000000000 +0100
+++ ./third_party/libjingle/source/talk/base/network.h	2014-02-24 17:23:45.000000000 +0100
@@ -38,6 +38,10 @@
 #include "talk/base/messagehandler.h"
 #include "talk/base/sigslot.h"
 
+#if defined(OS_FREEBSD)
+#include <sys/types.h>
+#endif
+
 #if defined(POSIX)
 struct ifaddrs;
 #endif  // defined(POSIX)
