--- net/proxy/proxy_service.cc.orig	2014-10-02 17:39:47 UTC
+++ net/proxy/proxy_service.cc
@@ -40,7 +40,7 @@
 #elif defined(OS_MACOSX)
 #include "net/proxy/proxy_config_service_mac.h"
 #include "net/proxy/proxy_resolver_mac.h"
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 #include "net/proxy/proxy_config_service_linux.h"
 #elif defined(OS_ANDROID)
 #include "net/proxy/proxy_config_service_android.h"
@@ -1412,7 +1412,7 @@
              << "profile_io_data.cc::CreateProxyConfigService and this should "
              << "be used only for examples.";
   return new UnsetProxyConfigService;
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   ProxyConfigServiceLinux* linux_config_service =
       new ProxyConfigServiceLinux();
 
