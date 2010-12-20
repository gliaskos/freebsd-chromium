--- ./net/base/listen_socket_unittest.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/listen_socket_unittest.cc	2010-12-20 20:41:37.000000000 +0100
@@ -6,6 +6,9 @@
 
 #include <fcntl.h>
 #include <sys/types.h>
+#if defined(OS_FREEBSD)
+#include <netinet/in.h>
+#endif
 
 #include "base/eintr_wrapper.h"
 #include "net/base/net_util.h"
