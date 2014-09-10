--- build/linux/system.gyp.orig	2014-09-04 00:29:09 UTC
+++ build/linux/system.gyp
@@ -890,6 +890,13 @@
       'include_dirs': [
         '../..',
       ],
+      'conditions' : [
+        ['OS=="freebsd"', {
+          'include_dirs': [
+            '<(prefix_dir)/include',
+          ],
+        }],
+      ],
       'hard_dependency': 1,
       'actions': [
         {
