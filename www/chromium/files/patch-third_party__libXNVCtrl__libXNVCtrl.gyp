--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-03-04 03:16:12.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-03-07 14:10:35.000000000 +0100
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
