--- ./net/socket/tcp_listen_socket_unittest.h.orig	2014-02-20 21:28:32.000000000 +0100
+++ ./net/socket/tcp_listen_socket_unittest.h	2014-02-24 17:23:45.000000000 +0100
@@ -13,6 +13,9 @@
 #include <arpa/inet.h>
 #include <errno.h>
 #include <sys/socket.h>
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
 #endif
 
 #include "base/basictypes.h"
