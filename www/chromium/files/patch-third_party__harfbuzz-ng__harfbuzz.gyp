--- ./third_party/harfbuzz-ng/harfbuzz.gyp.orig	2014-07-15 21:03:05.000000000 +0200
+++ ./third_party/harfbuzz-ng/harfbuzz.gyp	2014-07-29 12:02:25.000000000 +0200
@@ -135,7 +135,7 @@
             'src/hb-warning.cc',
           ],
           'include_dirs': [
-            'src',
+            'src', '<(prefix_dir)/include',
           ],
           'direct_dependent_settings': {
             'include_dirs': [
