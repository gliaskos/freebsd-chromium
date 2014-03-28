--- ./third_party/libjpeg_turbo/libjpeg.gyp.orig	2014-03-26 21:16:29.000000000 +0100
+++ ./third_party/libjpeg_turbo/libjpeg.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -240,7 +240,7 @@
             ],
           },
         }],
-        [ 'OS=="linux" or (OS=="android" and target_arch!="arm")', {
+        [ 'OS=="linux" or OS=="freebsd" or (OS=="android" and target_arch!="arm")', {
           'conditions': [
             [ 'use_system_yasm==0', {
               'dependencies': [
@@ -271,6 +271,9 @@
                 ],
               }],
             ],
+            'include_dirs': [
+              '<(prefix_dir)/include',
+            ],
           },
         }],
       ],
