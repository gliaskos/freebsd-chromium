--- ./net/net.gyp.orig	2012-08-17 03:01:33.000000000 +0200
+++ ./net/net.gyp	2012-08-23 22:31:44.000000000 +0200
@@ -905,7 +905,7 @@
                 'sources!': [
                   'base/network_change_notifier_linux.cc',
                   'base/network_change_notifier_netlink_linux.cc',
-                  'proxy/proxy_config_service_linux.cc',
+#                  'proxy/proxy_config_service_linux.cc',
                 ],
               },{
                 'dependencies': [
