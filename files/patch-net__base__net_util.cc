--- ./net/base/net_util.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/net_util.cc	2010-12-20 20:41:37.000000000 +0100
@@ -25,9 +25,9 @@
 #include <fcntl.h>
 #include <ifaddrs.h>
 #include <netdb.h>
+#include <sys/socket.h>
 #include <net/if.h>
 #include <netinet/in.h>
-#include <sys/socket.h>
 #endif
 
 #include "base/base64.h"
