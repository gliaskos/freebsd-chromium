--- net/socket/socks5_client_socket.cc.orig	2014-09-04 00:04:18 UTC
+++ net/socket/socks5_client_socket.cc
@@ -4,6 +4,10 @@
 
 #include "net/socket/socks5_client_socket.h"
 
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
+
 #include "base/basictypes.h"
 #include "base/callback_helpers.h"
 #include "base/compiler_specific.h"
