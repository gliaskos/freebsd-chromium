--- ./third_party/libjingle/source/talk/base/network.h.orig	2014-07-15 21:04:16.000000000 +0200
+++ ./third_party/libjingle/source/talk/base/network.h	2014-07-20 18:13:09.000000000 +0200
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
