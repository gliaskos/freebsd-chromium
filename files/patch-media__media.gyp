--- media/media.gyp.orig	2011-07-09 12:11:02.000000000 +0300
+++ media/media.gyp	2011-07-18 15:39:21.647872983 +0300
@@ -237,7 +237,7 @@
             'omx_wrapper',
           ]
         }],
-        ['os_posix == 1 and OS != "mac"', {
+        ['os_posix == 1 and OS != "freebsd" and OS != "mac"', {
           'sources!': [
             'video/capture/video_capture_device_dummy.cc',
             'video/capture/video_capture_device_dummy.h',
@@ -669,7 +669,6 @@
           ],
           'libraries': [
             '-lGL',
-            '-ldl',
           ],
           'sources': [
             'tools/tile_render_bench/tile_render_bench.cc',
@@ -749,7 +748,6 @@
           ],
           'link_settings': {
             'libraries': [
-              '-ldl',
               '-lX11',
               '-lXrender',
               '-lXext',
