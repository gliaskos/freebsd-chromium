--- net/net.gyp.orig	2011-03-15 05:45:28.000000000 +0200
+++ net/net.gyp	2011-03-15 05:50:51.000000000 +0200
@@ -137,8 +137,8 @@
         'base/network_change_notifier_linux.h',
         'base/network_change_notifier_mac.cc',
         'base/network_change_notifier_mac.h',
-        'base/network_change_notifier_netlink_linux.cc',
-        'base/network_change_notifier_netlink_linux.h',
+        #'base/network_change_notifier_netlink_linux.cc',
+        #'base/network_change_notifier_netlink_linux.h',
         'base/network_change_notifier_win.cc',
         'base/network_change_notifier_win.h',
         'base/network_config_watcher_mac.cc',
@@ -1029,7 +1029,7 @@
             ],
           }
         ],
-        [ 'OS == "linux"', {
+        [ 'OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
@@ -1194,7 +1194,7 @@
             }],
           ],
         }],
-        ['OS == "linux"', {
+        ['OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
