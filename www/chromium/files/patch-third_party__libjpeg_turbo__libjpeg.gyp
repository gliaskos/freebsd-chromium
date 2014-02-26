--- ./third_party/libjpeg_turbo/libjpeg.gyp.orig	2014-02-20 21:28:56.000000000 +0100
+++ ./third_party/libjpeg_turbo/libjpeg.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -232,7 +232,7 @@
             ],
           },
         }],
-        [ 'OS=="linux" or (OS=="android" and target_arch!="arm")', {
+        [ 'OS=="linux" or OS=="freebsd" or (OS=="android" and target_arch!="arm")', {
           'conditions': [
             [ 'use_system_yasm==0', {
               'dependencies': [
@@ -263,6 +263,9 @@
                 ],
               }],
             ],
+            'include_dirs': [
+              '<(prefix_dir)/include',
+            ],
           },
         }],
         [ 'OS=="android"', {
