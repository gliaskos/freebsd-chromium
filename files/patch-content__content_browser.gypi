--- content/content_browser.gypi.orig	2014-10-10 09:15:31 UTC
+++ content/content_browser.gypi
@@ -761,6 +761,8 @@
       'browser/geolocation/wifi_data_provider_common_win.cc',
       'browser/geolocation/wifi_data_provider_common_win.h',
       'browser/geolocation/wifi_data_provider_corewlan_mac.mm',
+      'browser/geolocation/wifi_data_provider_freebsd.cc',
+      'browser/geolocation/wifi_data_provider_freebsd.h',
       'browser/geolocation/wifi_data_provider_linux.cc',
       'browser/geolocation/wifi_data_provider_linux.h',
       'browser/geolocation/wifi_data_provider_mac.cc',
@@ -1744,12 +1746,12 @@
         '<@(webrtc_browser_sources)',
       ],
     }],
-    ['enable_webrtc==1 and OS=="linux"', {
+    ['enable_webrtc==1 and (OS=="linux" or os_bsd==1)', {
       'dependencies': [
         '../third_party/libjingle/libjingle.gyp:libjingle_webrtc',
       ],
     }],
-    ['enable_webrtc==1 and (OS=="linux" or OS=="mac" or OS=="win")', {
+    ['enable_webrtc==1 and (OS=="linux" or OS=="mac" or OS=="win" or os_bsd==1)', {
       'sources': [
         'browser/media/capture/desktop_capture_device.cc',
         'browser/media/capture/desktop_capture_device.h',
@@ -1817,7 +1819,7 @@
         'browser/udev_linux.h',
       ],
     }],
-    ['OS=="linux" and use_aura==1', {
+    ['(OS=="linux" or os_bsd==1) and use_aura==1', {
       'dependencies': [
         '../build/linux/system.gyp:fontconfig',
       ],
@@ -1903,8 +1905,18 @@
       ],
     }],
     ['os_bsd==1', {
-      'sources/': [
-        ['exclude', '^browser/gamepad/gamepad_platform_data_fetcher_linux\\.cc$'],
+      'sources!': [
+        'public/browser/zygote_host_linux.h',
+        'browser/zygote_host/zygote_host_impl_linux.cc',
+        'browser/zygote_host/zygote_host_impl_linux.h',
+        'zygote/zygote_linux.cc',
+        'zygote/zygote_linux.h',
+        'zygote/zygote_main_linux.cc',
+        'browser/device_monitor_linux.cc',
+        'browser/download/file_metadata_linux.cc',
+        'browser/gamepad/gamepad_platform_data_fetcher_linux.cc',
+        'browser/geolocation/wifi_data_provider_linux.cc',
+        'browser/udev_linux.cc',
       ],
     }],
     ['use_aura==1', {
@@ -1952,7 +1964,7 @@
         'browser/geolocation/empty_wifi_data_provider.cc',
       ],
     }],
-    ['OS == "linux" and use_dbus==1', {
+    ['(OS == "linux" or os_bsd==1) and use_dbus==1', {
       'sources!': [
         'browser/geolocation/empty_wifi_data_provider.cc',
       ],
