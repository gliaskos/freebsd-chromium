--- ./device/hid/hid.gyp.orig	2014-06-30 21:01:09.000000000 +0200
+++ ./device/hid/hid.gyp	2014-07-07 15:35:26.000000000 +0200
@@ -21,12 +21,12 @@
         }],
       ],
       'sources': [
-        'device_monitor_linux.cc',
-        'device_monitor_linux.h',
+        #'device_monitor_linux.cc',
+        #'device_monitor_linux.h',
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
@@ -49,9 +49,9 @@
         'hid_usage_and_page.h',
         'hid_utils_mac.cc',
         'hid_utils_mac.h',
-        'input_service_linux.cc',
-        'input_service_linux.h',
-        'udev_common.h'
+        #'input_service_linux.cc',
+        #'input_service_linux.h',
+        #'udev_common.h'
       ],
     },
   ],
