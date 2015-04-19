--- device/serial/serial.gyp.orig	2014-10-10 09:15:31 UTC
+++ device/serial/serial.gyp
@@ -39,6 +39,12 @@
             'serial_device_enumerator_linux.h',
           ],
         }],
+        ['os_bsd==1', {
+          'sources!': [
+            'serial_device_enumerator_linux.cc',
+            'serial_device_enumerator_linux.h',
+          ],
+        }],
       ],
       'dependencies': [
         'device_serial_mojo',
