--- ./base/posix/unix_domain_socket_linux.cc.orig	2014-06-30 21:01:40.000000000 +0200
+++ ./base/posix/unix_domain_socket_linux.cc	2014-07-07 15:46:31.000000000 +0200
@@ -18,6 +18,15 @@
 #include "base/posix/eintr_wrapper.h"
 #include "base/stl_util.h"
 
+#if defined(__FreeBSD__)
+// Port over Linux ucred structure
+struct ucred {
+  pid_t pid; // process ID of the sending process
+  uid_t uid; // user ID of the sending process
+  gid_t gid; // group ID of the sending process
+};
+#endif
+
 const size_t UnixDomainSocket::kMaxFileDescriptors = 16;
 
 // Creates a connected pair of UNIX-domain SOCK_SEQPACKET sockets, and passes
@@ -35,7 +44,11 @@
 // static
 bool UnixDomainSocket::EnableReceiveProcessId(int fd) {
   const int enable = 1;
+#if defined(__FreeBSD__)
+  //TODO cmsghdr / cmsgcred see http://books.google.gr/books?id=ptSC4LpwGA0C&pg=PA429&lp
+#else
   return setsockopt(fd, SOL_SOCKET, SO_PASSCRED, &enable, sizeof(enable)) == 0;
+#endif
 }
 
 // static
