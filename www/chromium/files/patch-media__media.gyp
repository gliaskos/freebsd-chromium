--- media/media.gyp.orig	2016-05-11 15:02:24.000000000 -0400
+++ media/media.gyp	2016-05-20 11:20:53.231059000 -0400
@@ -745,7 +745,13 @@
             ['exclude', '_alsa\\.(h|cc)$'],
           ],
         }],
-        ['OS=="linux"', {
+	['OS=="freebsd"', {
+	  'sources!': [
+	    'capture/video/linux/v4l2_capture_delegate.cc',
+	    'capture/video/linux/video_capture_device_factory_linux.cc',
+	  ],
+	}],
+        ['OS=="linux" or os_bsd==1', {
           'conditions': [
             ['use_x11==1', {
               'dependencies': [
@@ -1095,7 +1101,7 @@
             'base/simd/filter_yuv_sse2.cc',
           ],
         }],
-        ['OS!="linux" and OS!="win"', {
+        ['OS!="linux" and OS!="win" and os_bsd!=1', {
           'sources!': [
             'base/keyboard_event_counter.cc',
             'base/keyboard_event_counter.h',
