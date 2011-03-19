--- ./net/proxy/proxy_service.cc.orig	2010-12-13 12:03:17.000000000 +0100
+++ ./net/proxy/proxy_service.cc	2011-01-07 14:17:11.000000000 +0100
@@ -25,7 +25,7 @@
 #elif defined(OS_MACOSX)
 #include "net/proxy/proxy_config_service_mac.h"
 #include "net/proxy/proxy_resolver_mac.h"
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_FREEBSD)
 #include "net/proxy/proxy_config_service_linux.h"
 #endif
 #include "net/proxy/proxy_resolver.h"
@@ -796,7 +796,7 @@
   NOTREACHED() << "ProxyConfigService for ChromeOS should be created in "
                << "chrome_url_request_context.cc::CreateProxyConfigService.";
   return NULL;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   ProxyConfigServiceLinux* linux_config_service
       = new ProxyConfigServiceLinux();

