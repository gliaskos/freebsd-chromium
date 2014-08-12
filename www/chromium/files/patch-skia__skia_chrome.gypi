--- skia/skia_chrome.gypi.orig	2014-07-15 21:02:59.000000000 +0200
+++ skia/skia_chrome.gypi	2014-08-12 22:29:49.000000000 +0200
@@ -78,6 +78,11 @@
     'ext/vector_platform_device_skia.h',
   ],
   'conditions': [
+    [ 'use_cairo == 1', {
+      'dependencies': [
+        '../build/linux/system.gyp:pangocairo',
+      ],
+    }],
     [ 'OS == "android" and enable_printing == 0', {
       'sources!': [
         'ext/skia_utils_base.cc',
