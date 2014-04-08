--- ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi.orig	2014-04-02 21:06:17.000000000 +0200
+++ ./third_party/webrtc/modules/desktop_capture/desktop_capture.gypi	2014-04-04 01:39:19.000000000 +0200
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
