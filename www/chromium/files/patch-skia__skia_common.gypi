--- ./skia/skia_common.gypi.orig	2014-03-26 21:14:39.000000000 +0100
+++ ./skia/skia_common.gypi	2014-03-28 10:57:59.000000000 +0100
@@ -61,7 +61,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
