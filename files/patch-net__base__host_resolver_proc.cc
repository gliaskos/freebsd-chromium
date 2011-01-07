--- ./net/base/host_resolver_proc.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/host_resolver_proc.cc	2011-01-07 14:17:11.000000000 +0100
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
+#include <netdb.h> /* EAI_NODATA */
+#include <resolv.h>
+#endif
 
 namespace net {
 
@@ -248,7 +248,10 @@
 #if defined(OS_WIN)
     if (err != WSAHOST_NOT_FOUND && err != WSANO_DATA)
       return ERR_NAME_RESOLUTION_FAILED;
-#elif defined(OS_POSIX)
+#elif defined(OS_FREEBSD)
+    if (err != EAI_NONAME) /* EAI_NODATA depreciated in FreeBSD 5.x */
+      return ERR_NAME_RESOLUTION_FAILED;
+#elif defined(OS_POSIX) && !defined(OS_FREEBSD)
     if (err != EAI_NONAME && err != EAI_NODATA)
       return ERR_NAME_RESOLUTION_FAILED;
 #endif
