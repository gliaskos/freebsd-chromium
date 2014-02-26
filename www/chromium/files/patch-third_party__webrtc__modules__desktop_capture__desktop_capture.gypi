--- ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi.orig	2014-02-20 21:29:38.000000000 +0100
+++ ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi	2014-02-24 17:23:45.000000000 +0100
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
