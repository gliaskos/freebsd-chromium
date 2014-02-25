--- ./net/udp/udp_socket_unittest.cc.orig	2014-02-20 21:28:32.000000000 +0100
+++ ./net/udp/udp_socket_unittest.cc	2014-02-24 17:23:45.000000000 +0100
@@ -202,7 +202,7 @@
       client_entries, 5, NetLog::TYPE_SOCKET_ALIVE));
 }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_BSD)
 // UDPSocketPrivate_Broadcast is disabled for OSX because it requires
 // root permissions on OSX 10.7+.
 TEST_F(UDPSocketTest, DISABLED_Broadcast) {
