--- device/serial/serial.gyp.orig	2014-07-15 21:02:36.000000000 +0200
+++ device/serial/serial.gyp	2014-08-12 22:03:23.000000000 +0200
@@ -19,6 +19,12 @@
             '../../build/linux/system.gyp:udev',
           ],
         }],
+        ['os_bsd==1', {
+          'sources!': [
+            'serial_device_enumerator_linux.cc',
+            'serial_device_enumerator_linux.h',
+          ],
+        }],
       ],
       'sources': [
         'serial_device_enumerator.cc',
