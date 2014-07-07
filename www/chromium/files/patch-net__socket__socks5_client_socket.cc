--- ./net/socket/socks5_client_socket.cc.orig	2014-06-30 21:02:53.000000000 +0200
+++ ./net/socket/socks5_client_socket.cc	2014-07-01 22:46:25.000000000 +0200
@@ -4,6 +4,10 @@
 
 #include "net/socket/socks5_client_socket.h"
 
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
+
 #include "base/basictypes.h"
 #include "base/callback_helpers.h"
 #include "base/compiler_specific.h"
