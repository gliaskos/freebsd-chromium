--- ./net/socket/socks5_client_socket.cc.orig	2014-02-20 21:28:32.000000000 +0100
+++ ./net/socket/socks5_client_socket.cc	2014-02-24 17:23:45.000000000 +0100
@@ -4,6 +4,10 @@
 
 #include "net/socket/socks5_client_socket.h"
 
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
+
 #include "base/basictypes.h"
 #include "base/compiler_specific.h"
 #include "base/debug/trace_event.h"
