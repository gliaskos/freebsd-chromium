--- ./chrome/chrome_browser.gypi.orig	2014-06-30 21:02:37.000000000 +0200
+++ ./chrome/chrome_browser.gypi	2014-07-07 15:12:47.000000000 +0200
@@ -1122,8 +1122,8 @@
         'browser/media_galleries/imported_media_gallery_registry.h',
         'browser/media_galleries/linux/mtp_device_delegate_impl_linux.cc',
         'browser/media_galleries/linux/mtp_device_delegate_impl_linux.h',
-        'browser/media_galleries/linux/mtp_device_object_enumerator.cc',
-        'browser/media_galleries/linux/mtp_device_object_enumerator.h',
+        #'browser/media_galleries/linux/mtp_device_object_enumerator.cc',
+        #'browser/media_galleries/linux/mtp_device_object_enumerator.h',
         'browser/media_galleries/linux/mtp_device_task_helper.cc',
         'browser/media_galleries/linux/mtp_device_task_helper.h',
         'browser/media_galleries/linux/mtp_device_task_helper_map_service.cc',
@@ -2921,7 +2921,7 @@
             '../device/media_transfer_protocol/media_transfer_protocol.gyp:device_media_transfer_protocol',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or os_bsd==1', {
           'dependencies': [
             '../build/linux/system.gyp:libspeechd',
           ],
@@ -3044,7 +3044,7 @@
             '../build/linux/system.gyp:xscrnsaver',
           ],
         }],
-        ['os_posix == 1 and OS != "mac" and OS != "ios"', {
+        ['os_posix == 1 and OS != "mac" and OS != "ios" and os_bsd != 1', {
           'sources': [
             'app/chrome_breakpad_client.cc',
             'app/chrome_breakpad_client.h',
@@ -3278,6 +3278,25 @@
             ['exclude', '^third_party/mozilla_security_manager/'],
           ],
         }],
+        ['os_bsd==1', {
+          'sources/': [
+            ['exclude', '^browser/chrome_browser_main_linux.cc'],
+            ['exclude', '^browser/chrome_browser_main_linux.h'],
+            ['exclude', '^browser/media_galleries/linux/'],
+            ['exclude', '^browser/storage_monitor/media_transfer_protocol_device_observer_linux.cc'],
+            ['exclude', '^browser/storage_monitor/media_transfer_protocol_device_observer_linux.h'],
+            ['exclude', '^browser/storage_monitor/removable_device_notifications_linux.cc'],
+            ['exclude', '^browser/storage_monitor/removable_device_notifications_linux.h'],
+            ['exclude', '^browser/storage_monitor/storage_monitor_linux.cc'],
+            ['exclude', '^browser/storage_monitor/storage_monitor_linux.h'],
+            ['exclude', '^browser/storage_monitor/udev_util_linux.cc'],
+            ['exclude', '^browser/storage_monitor/udev_util_linux.h'],
+            ['exclude', '^browser/storage_monitor/test_media_transfer_protocol_manager_linux.cc'],
+            ['exclude', '^browser/storage_monitor/test_media_transfer_protocol_manager_linux.h'],
+            ['exclude', '^browser/storage_monitor/mtab_watcher_linux.cc'],
+            ['exclude', '^browser/storage_monitor/mtab_watcher_linux.h'],
+          ],
+        }],
         ['OS=="mac"', {
           'dependencies': [
             '../third_party/google_toolbox_for_mac/google_toolbox_for_mac.gyp:google_toolbox_for_mac',
