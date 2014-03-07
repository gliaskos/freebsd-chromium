--- ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi.orig	2014-03-04 03:18:44.000000000 +0100
+++ ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi	2014-03-07 14:10:35.000000000 +0100
@@ -95,6 +95,11 @@
             ],
           },
         }],
+        ['os_bsd==1', {
+          'include_dirs': [
+            '<(prefix_dir)/include',
+          ],
+        }],
         ['OS!="win" and OS!="mac" and use_x11==0', {
           'sources': [
             "mouse_cursor_monitor_null.cc",
