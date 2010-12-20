--- ./net/base/dnsrr_resolver.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/dnsrr_resolver.cc	2010-12-20 20:41:37.000000000 +0100
@@ -4,10 +4,6 @@
 
 #include "net/base/dnsrr_resolver.h"
 
-#if defined(OS_POSIX)
-#include <resolv.h>
-#endif
-
 #include "base/lock.h"
 #include "base/message_loop.h"
 #include "base/scoped_ptr.h"
@@ -19,6 +15,10 @@
 #include "net/base/dns_reload_timer.h"
 #include "net/base/dns_util.h"
 #include "net/base/net_errors.h"
+#if defined(OS_POSIX)
+#include <netinet/in.h>
+#include <resolv.h>
+#endif
 
 DISABLE_RUNNABLE_METHOD_REFCOUNT(net::RRResolverWorker);
 DISABLE_RUNNABLE_METHOD_REFCOUNT(net::RRResolverHandle);
