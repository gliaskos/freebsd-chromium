--- ./skia/skia_common.gypi.orig	2014-03-12 20:21:30.000000000 +0100
+++ ./skia/skia_common.gypi	2014-03-14 09:23:25.000000000 +0100
@@ -61,7 +61,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
