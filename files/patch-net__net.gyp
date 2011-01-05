--- ./net/net.gyp.orig	2010-12-13 06:03:19.000000000 -0500
+++ ./net/net.gyp	2011-01-04 20:39:52.000000000 -0500
@@ -130,12 +130,12 @@
         'base/net_util_win.cc',
         'base/network_change_notifier.cc',
         'base/network_change_notifier.h',
-        'base/network_change_notifier_linux.cc',
-        'base/network_change_notifier_linux.h',
+        #'base/network_change_notifier_linux.cc',
+        #'base/network_change_notifier_linux.h',
         'base/network_change_notifier_mac.cc',
         'base/network_change_notifier_mac.h',
-        'base/network_change_notifier_netlink_linux.cc',
-        'base/network_change_notifier_netlink_linux.h',
+        #'base/network_change_notifier_netlink_linux.cc',
+        #'base/network_change_notifier_netlink_linux.h',
         'base/network_change_notifier_win.cc',
         'base/network_change_notifier_win.h',
         'base/network_config_watcher_mac.cc',
@@ -1002,7 +1002,7 @@
             ],
           }
         ],
-        [ 'OS == "linux"', {
+        [ 'OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
@@ -1205,7 +1205,7 @@
             }],
           ],
         }],
-        ['OS == "linux"', {
+        ['OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
