--- ./third_party/icu/icu.gyp.orig	2014-07-15 21:03:58.000000000 +0200
+++ ./third_party/icu/icu.gyp	2014-08-05 19:22:17.000000000 +0200
@@ -365,6 +365,11 @@
           'target_name': 'system_icu',
           'type': 'none',
           'conditions': [
+            ['OS=="freebsd"', {
+              'include_dirs': [
+                '<(prefix_dir)/include',
+              ],
+            }],
             ['OS=="android"', {
               'direct_dependent_settings': {
                 'include_dirs': [
@@ -596,6 +601,13 @@
           'includes': [
             '../../build/shim_headers.gypi',
           ],
+          'conditions': [
+            ['OS=="freebsd"', {
+              'include_dirs': [
+                '<(prefix_dir)/include',
+              ],
+            }],
+          ],
           'toolsets': ['target'],
         },
       ], # targets
