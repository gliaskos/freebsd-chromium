--- ./skia/skia_library.gypi.orig	2014-03-04 03:16:08.000000000 +0100
+++ ./skia/skia_library.gypi	2014-03-07 14:10:34.000000000 +0100
@@ -195,7 +195,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
