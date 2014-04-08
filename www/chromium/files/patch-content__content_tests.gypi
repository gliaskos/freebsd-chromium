--- ./content/content_tests.gypi.orig	2014-04-02 21:03:33.000000000 +0200
+++ ./content/content_tests.gypi	2014-04-04 01:39:18.000000000 +0200
@@ -818,6 +818,15 @@
             'browser/geolocation/wifi_data_provider_linux_unittest.cc',
           ],
         }],
+        ['OS == "freebsd"', {
+          'sources!': [
+            'browser/download/file_metadata_unittest_linux.cc',
+            'browser/geolocation/wifi_data_provider_linux_unittest.cc',
+            'browser/renderer_host/media/media_stream_dispatcher_host_unittest.cc',
+            'browser/renderer_host/media/media_stream_manager_unittest.cc',
+            'browser/renderer_host/media/media_stream_ui_controller_unittest.cc',
+          ],
+        }],
         ['OS != "android" and OS != "ios"', {
           'dependencies': [
             '../third_party/libvpx/libvpx.gyp:libvpx',
