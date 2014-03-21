--- ./skia/skia_common.gypi.orig	2014-03-19 20:01:38.000000000 +0100
+++ ./skia/skia_common.gypi	2014-03-21 00:27:13.000000000 +0100
@@ -61,7 +61,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
