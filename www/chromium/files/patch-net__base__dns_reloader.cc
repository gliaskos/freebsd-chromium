--- ./net/base/dns_reloader.cc.orig	2014-06-30 21:02:51.000000000 +0200
+++ ./net/base/dns_reloader.cc	2014-07-07 15:12:48.000000000 +0200
@@ -7,6 +7,9 @@
 #if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_OPENBSD) && \
     !defined(OS_ANDROID)
 
+#if defined(OS_FREEBSD)
+#include <netinet/in.h>
+#endif
 #include <resolv.h>
 
 #include "base/basictypes.h"
