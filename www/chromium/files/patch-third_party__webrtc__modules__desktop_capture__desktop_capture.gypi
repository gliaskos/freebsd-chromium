--- ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi.orig	2014-03-26 21:17:08.000000000 +0100
+++ ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi	2014-03-28 10:57:59.000000000 +0100
@@ -99,6 +99,11 @@
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
