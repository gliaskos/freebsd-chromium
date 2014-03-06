--- ./net/dns/address_sorter_posix.cc.orig	2014-02-20 21:28:32.000000000 +0100
+++ ./net/dns/address_sorter_posix.cc	2014-02-24 17:23:45.000000000 +0100
@@ -10,6 +10,7 @@
 #include <sys/socket.h>  // Must be included before ifaddrs.h.
 #include <ifaddrs.h>
 #include <net/if.h>
+#include <net/if_var.h>
 #include <netinet/in_var.h>
 #include <string.h>
 #include <sys/ioctl.h>
