--- gpu/gpu_config.gypi.orig	2014-09-04 00:04:16 UTC
+++ gpu/gpu_config.gypi
@@ -70,7 +70,7 @@
         '../build/linux/system.gyp:libpci',
       ],
     }],
-    ['OS=="linux" and use_x11==1', {
+    ['(OS=="linux" or os_bsd==1) and use_x11==1', {
       'dependencies': [
         '../build/linux/system.gyp:x11',
         '../build/linux/system.gyp:xext',
