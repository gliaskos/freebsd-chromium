--- ./chrome/chrome_browser.gypi.orig	2014-02-20 21:27:54.000000000 +0100
+++ ./chrome/chrome_browser.gypi	2014-02-24 17:23:44.000000000 +0100
@@ -2891,7 +2891,7 @@
             '../device/media_transfer_protocol/media_transfer_protocol.gyp:device_media_transfer_protocol',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or os_bsd==1', {
           'dependencies': [
             '../build/linux/system.gyp:libspeechd',
           ],
@@ -3014,7 +3014,7 @@
             ],
           },
         }],
-        ['os_posix == 1 and OS != "mac" and OS != "ios"', {
+        ['os_posix == 1 and OS != "mac" and OS != "ios" and os_bsd != 1', {
           'sources': [
             'app/chrome_breakpad_client.cc',
             'app/chrome_breakpad_client.h',
@@ -3272,6 +3272,25 @@
             ['exclude', '^browser/usb/'],
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
             '../third_party/mozilla/mozilla.gyp:mozilla',
