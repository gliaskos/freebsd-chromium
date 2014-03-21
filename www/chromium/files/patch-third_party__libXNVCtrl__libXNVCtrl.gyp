--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-03-19 20:01:47.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-03-21 00:27:13.000000000 +0100
@@ -13,6 +13,9 @@
         'NVCtrlLib.h',
         'nv_control.h',
       ],
+      'include_dirs': [
+        '<(prefix_dir)/include',
+      ],
     },
   ],
 }
