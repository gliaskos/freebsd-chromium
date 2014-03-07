--- ./net/net.gyp.orig	2014-03-04 03:16:07.000000000 +0100
+++ ./net/net.gyp	2014-03-07 14:10:34.000000000 +0100
@@ -1380,9 +1380,10 @@
               }],
               ['os_bsd==1', {
                 'sources!': [
+                  'base/address_tracker_linux.cc',
                   'base/network_change_notifier_linux.cc',
                   'base/network_change_notifier_netlink_linux.cc',
-                  'proxy/proxy_config_service_linux.cc',
+#                  'proxy/proxy_config_service_linux.cc',
                 ],
               },{
                 'dependencies': [
@@ -1997,7 +1998,7 @@
         'websockets/websocket_throttle_test.cc',
       ],
       'conditions': [
-        ['os_posix == 1 and OS != "mac" and OS != "ios" and OS != "android"', {
+        ['os_posix == 1 and OS != "mac" and OS != "ios" and OS != "android" and os_bsd != 1', {
           'dependencies': [
             'balsa',
             'epoll_server',
@@ -2264,6 +2265,11 @@
             '../testing/android/native_test.gyp:native_test_native_code',
           ]
         }],
+        [ 'os_bsd == 1', {
+          'sources!': [
+            'base/address_tracker_linux_unittest.cc',
+          ],
+        }],
       ],
     },
     {
