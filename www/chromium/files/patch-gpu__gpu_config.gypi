--- ./gpu/gpu_config.gypi.orig	2014-03-26 21:14:09.000000000 +0100
+++ ./gpu/gpu_config.gypi	2014-03-28 10:57:59.000000000 +0100
@@ -63,7 +63,7 @@
         '../third_party/amd/amd_videocard_info_win.cc',
       ],
     }],
-    ['OS=="linux" and use_x11==1', {
+    ['(OS=="linux" or os_bsd==1) and use_x11==1', {
       'dependencies': [
         '../build/linux/system.gyp:libpci',
         '../third_party/libXNVCtrl/libXNVCtrl.gyp:libXNVCtrl',
