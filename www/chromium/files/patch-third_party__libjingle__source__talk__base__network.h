--- ./third_party/libjingle/source/talk/base/network.h.orig	2014-03-05 22:26:15.000000000 +0100
+++ ./third_party/libjingle/source/talk/base/network.h	2014-03-07 23:57:27.000000000 +0100
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
