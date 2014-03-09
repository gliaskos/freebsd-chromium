--- ./device/serial/serial.gyp.orig	2014-03-05 22:23:49.000000000 +0100
+++ ./device/serial/serial.gyp	2014-03-08 09:17:50.000000000 +0100
@@ -23,8 +23,8 @@
       'sources': [
         'serial_device_enumerator.cc',
         'serial_device_enumerator.h',
-        'serial_device_enumerator_linux.cc',
-        'serial_device_enumerator_linux.h',
+        #'serial_device_enumerator_linux.cc',
+        #'serial_device_enumerator_linux.h',
         'serial_device_enumerator_mac.cc',
         'serial_device_enumerator_mac.h',
         'serial_device_enumerator_win.cc',
