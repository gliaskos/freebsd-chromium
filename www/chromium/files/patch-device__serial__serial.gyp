--- ./device/serial/serial.gyp.orig	2014-06-30 21:01:09.000000000 +0200
+++ ./device/serial/serial.gyp	2014-07-01 22:46:25.000000000 +0200
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
