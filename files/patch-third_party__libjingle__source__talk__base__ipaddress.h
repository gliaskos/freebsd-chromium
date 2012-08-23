--- ./third_party/libjingle/source/talk/base/ipaddress.h.orig	2012-08-17 03:03:30.000000000 +0200
+++ ./third_party/libjingle/source/talk/base/ipaddress.h	2012-08-23 22:31:45.000000000 +0200
@@ -34,6 +34,9 @@
 #include <arpa/inet.h>
 #include <netdb.h>
 #endif
+#ifdef BSD
+#include <sys/socket.h>
+#endif
 #ifdef WIN32
 #include <winsock2.h>
 #include <ws2tcpip.h>
