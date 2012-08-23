--- ./net/base/dns_reloader.cc.orig	2012-08-17 03:01:32.000000000 +0200
+++ ./net/base/dns_reloader.cc	2012-08-23 22:31:44.000000000 +0200
@@ -7,6 +7,9 @@
 #if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_OPENBSD) && \
     !defined(OS_ANDROID)
 
+#if defined(OS_FREEBSD)
+#include <netinet/in.h>
+#endif
 #include <resolv.h>
 
 #include "base/basictypes.h"
