--- ./net/base/net_util.h.orig	2014-03-26 21:14:36.000000000 +0100
+++ ./net/base/net_util.h	2014-03-28 10:57:59.000000000 +0100
@@ -13,6 +13,9 @@
 #elif defined(OS_POSIX)
 #include <sys/types.h>
 #include <sys/socket.h>
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
 #endif
 
 #include <string>
