--- ./third_party/libjingle/source/talk/base/ipaddress.h.orig	2014-02-20 21:29:12.000000000 +0100
+++ ./third_party/libjingle/source/talk/base/ipaddress.h	2014-02-24 17:23:45.000000000 +0100
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
