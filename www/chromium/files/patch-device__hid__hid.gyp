--- device/hid/hid.gyp.orig	2014-07-15 21:02:36.000000000 +0200
+++ device/hid/hid.gyp	2014-08-12 22:00:20.000000000 +0200
@@ -19,6 +19,18 @@
             '../../build/linux/system.gyp:udev',
           ],
         }],
+        ['os_bsd==1', {
+          'sources!': [
+            'device_monitor_linux.cc',
+            'device_monitor_linux.h',
+            'hid_connection_linux.cc',
+            'hid_connection_linux.h',
+            'hid_service_linux.cc',
+            'hid_service_linux.h',
+            'input_service_linux.cc',
+            'input_service_linux.h',
+          ],
+        }],
       ],
       'sources': [
         'device_monitor_linux.cc',
