--- ./net/base/net_util.cc.orig	2012-08-17 03:01:33.000000000 +0200
+++ ./net/base/net_util.cc	2012-08-23 23:34:09.000000000 +0200
@@ -21,8 +21,10 @@
 #include <ifaddrs.h>
 #endif
 #include <netdb.h>
+#include <sys/socket.h>
 #include <net/if.h>
 #include <netinet/in.h>
+#include <netinet6/in6.h>
 #endif
 
 #include "base/base64.h"
