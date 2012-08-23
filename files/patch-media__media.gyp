--- ./media/media.gyp.orig	2012-08-17 03:01:13.000000000 +0200
+++ ./media/media.gyp	2012-08-23 22:31:44.000000000 +0200
@@ -379,7 +379,7 @@
             'audio/openbsd/audio_manager_openbsd.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'variables': {
             'conditions': [
               ['sysroot!=""', {
@@ -894,7 +894,7 @@
         },
       ],
     }],
-    ['OS == "linux" and target_arch != "arm"', {
+    ['(OS == "linux" or OS == "freebsd") and target_arch != "arm"', {
       'targets': [
         {
           'target_name': 'tile_render_bench',
