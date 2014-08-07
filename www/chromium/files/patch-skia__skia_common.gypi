--- ./skia/skia_common.gypi.orig	2014-07-15 21:02:59.000000000 +0200
+++ ./skia/skia_common.gypi	2014-07-20 18:13:09.000000000 +0200
@@ -66,7 +66,7 @@
     }],
 
     #Settings for text blitting, chosen to approximate the system browser.
-    [ 'OS == "linux"', {
+    [ 'OS == "linux" or os_bsd == 1', {
       'defines': [
         'SK_GAMMA_EXPONENT=1.2',
         'SK_GAMMA_CONTRAST=0.2',
