--- ./skia/skia_common.gypi.orig	2014-04-02 21:03:41.000000000 +0200
+++ ./skia/skia_common.gypi	2014-04-04 01:39:18.000000000 +0200
@@ -61,7 +61,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
