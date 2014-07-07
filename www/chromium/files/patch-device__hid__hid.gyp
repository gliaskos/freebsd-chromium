--- ./device/hid/hid.gyp.orig	2014-06-30 21:01:09.000000000 +0200
+++ ./device/hid/hid.gyp	2014-07-01 22:46:25.000000000 +0200
@@ -25,8 +25,8 @@
         'device_monitor_linux.h',
         'hid_connection.cc',
         'hid_connection.h',
-        'hid_connection_linux.cc',
-        'hid_connection_linux.h',
+        #'hid_connection_linux.cc',
+        #'hid_connection_linux.h',
         'hid_connection_mac.cc',
         'hid_connection_mac.h',
         'hid_connection_win.cc',
@@ -39,8 +39,8 @@
         'hid_report_descriptor_item.h',
         'hid_service.cc',
         'hid_service.h',
-        'hid_service_linux.cc',
-        'hid_service_linux.h',
+        #'hid_service_linux.cc',
+        #'hid_service_linux.h',
         'hid_service_mac.cc',
         'hid_service_mac.h',
         'hid_service_win.cc',
