--- ./net/base/host_resolver_proc.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/host_resolver_proc.cc	2010-12-20 20:41:37.000000000 +0100
@@ -6,15 +6,15 @@
 
 #include "build/build_config.h"
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
-#include <resolv.h>
-#endif
-
 #include "base/logging.h"
 #include "net/base/address_list.h"
 #include "net/base/dns_reload_timer.h"
 #include "net/base/net_errors.h"
 #include "net/base/sys_addrinfo.h"
+#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#include <netdb.h> /* re-enable EAI_NODATA in netdb.h */
+#include <resolv.h>
+#endif
 
 namespace net {
 
