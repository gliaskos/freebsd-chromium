--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-03-05 22:24:25.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-03-07 23:57:27.000000000 +0100
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
