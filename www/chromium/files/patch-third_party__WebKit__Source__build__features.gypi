--- ./third_party/WebKit/Source/build/features.gypi.orig	2014-02-20 21:32:27.000000000 +0100
+++ ./third_party/WebKit/Source/build/features.gypi	2014-02-24 17:23:45.000000000 +0100
@@ -87,7 +87,7 @@
           'ENABLE_WEB_AUDIO=1',
         ],
       }],
-      ['OS=="win" or OS=="android" or OS=="linux"', {
+      ['OS=="win" or OS=="android" or OS=="linux" or os_bsd==1', {
         'feature_defines': [
           'ENABLE_OPENTYPE_VERTICAL=1',
         ],
