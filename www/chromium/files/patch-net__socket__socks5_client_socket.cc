--- ./net/socket/socks5_client_socket.cc.orig	2014-04-02 21:03:37.000000000 +0200
+++ ./net/socket/socks5_client_socket.cc	2014-04-04 01:39:18.000000000 +0200
@@ -4,6 +4,10 @@
 
 #include "net/socket/socks5_client_socket.h"
 
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
+
 #include "base/basictypes.h"
 #include "base/compiler_specific.h"
 #include "base/debug/trace_event.h"
