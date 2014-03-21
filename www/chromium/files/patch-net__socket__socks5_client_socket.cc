--- ./net/socket/socks5_client_socket.cc.orig	2014-03-19 20:01:36.000000000 +0100
+++ ./net/socket/socks5_client_socket.cc	2014-03-21 00:27:13.000000000 +0100
@@ -4,6 +4,10 @@
 
 #include "net/socket/socks5_client_socket.h"
 
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
+
 #include "base/basictypes.h"
 #include "base/compiler_specific.h"
 #include "base/debug/trace_event.h"
