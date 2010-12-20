--- ./chrome/browser/renderer_host/render_sandbox_host_linux.cc.orig	2010-12-13 12:04:26.000000000 +0100
+++ ./chrome/browser/renderer_host/render_sandbox_host_linux.cc	2010-12-20 20:41:37.000000000 +0100
@@ -654,7 +654,12 @@
   // inherit some sockets. With PF_UNIX+SOCK_DGRAM, it can call sendmsg to send
   // a datagram to any (abstract) socket on the same system. With
   // SOCK_SEQPACKET, this is prevented.
+#if defined(OS_FREEBSD)
+  if (socketpair(AF_UNIX, SOCK_SEQPACKET, 0, fds) != 0)
+    CHECK(socketpair(AF_UNIX, SOCK_DGRAM, 0, fds) == 0);
+#else
   CHECK(socketpair(AF_UNIX, SOCK_SEQPACKET, 0, fds) == 0);
+#endif
 
   renderer_socket_ = fds[0];
   const int browser_socket = fds[1];
