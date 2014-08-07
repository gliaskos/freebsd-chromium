--- ./net/socket/tcp_listen_socket_unittest.h.orig	2014-07-15 21:02:57.000000000 +0200
+++ ./net/socket/tcp_listen_socket_unittest.h	2014-07-20 18:13:09.000000000 +0200
@@ -13,6 +13,9 @@
 #include <arpa/inet.h>
 #include <errno.h>
 #include <sys/socket.h>
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
 #endif
 
 #include "base/basictypes.h"
