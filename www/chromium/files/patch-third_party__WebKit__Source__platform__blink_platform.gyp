--- ./third_party/WebKit/Source/platform/blink_platform.gyp.orig	2014-07-15 21:06:59.000000000 +0200
+++ ./third_party/WebKit/Source/platform/blink_platform.gyp	2014-08-05 12:07:46.000000000 +0200
@@ -38,6 +38,9 @@
   'targets': [{
     'target_name': 'blink_common',
     'type': '<(component)',
+    'include_dirs': [
+      '<(prefix_dir)/include',
+    ],
     'variables': { 'enable_wexit_time_destructors': 1 },
     'dependencies': [
       '../config.gyp:config',
@@ -246,7 +249,7 @@
     # compiler optimizations, see crbug.com/237063
     'msvs_disabled_warnings': [ 4267, 4334, 4724 ],
     'conditions': [
-      ['OS=="linux" or OS=="android" or OS=="win"', {
+      ['OS=="linux" or OS=="android" or OS=="freebsd" or OS=="win"', {
         'sources/': [
           # Cherry-pick files excluded by the broader regular expressions above.
           ['include', 'fonts/harfbuzz/FontHarfBuzz\\.cpp$'],
@@ -363,7 +366,7 @@
           ['exclude', 'fonts/harfbuzz/HarfBuzzFaceCoreText\\.cpp$'],
         ],
       }],
-      ['OS != "linux" and OS != "mac" and OS != "win"', {
+      ['OS != "linux" and OS != "freebsd" and OS != "mac" and OS != "win"', {
         'sources/': [
           ['exclude', 'VDMX[^/]+\\.(cpp|h)$'],
         ],
