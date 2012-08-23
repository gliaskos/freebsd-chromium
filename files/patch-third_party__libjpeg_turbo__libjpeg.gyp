--- ./third_party/libjpeg_turbo/libjpeg.gyp.orig	2012-08-17 03:03:23.000000000 +0200
+++ ./third_party/libjpeg_turbo/libjpeg.gyp	2012-08-23 22:56:50.000000000 +0200
@@ -225,7 +225,7 @@
                 ],
               },
             }],
-            [ 'OS=="linux" or (OS=="android" and target_arch!="arm")', {
+            [ 'OS=="linux" or OS=="freebsd" or (OS=="android" and target_arch!="arm")', {
               'conditions': [
                 [ 'use_system_yasm==0', {
                   'dependencies': [
@@ -296,6 +296,9 @@
             'defines': [
               'USE_SYSTEM_LIBJPEG',
             ],
+            'include_dirs': [
+              '<(prefix_dir)/include',
+            ],
           },
           'link_settings': {
             'libraries': [
