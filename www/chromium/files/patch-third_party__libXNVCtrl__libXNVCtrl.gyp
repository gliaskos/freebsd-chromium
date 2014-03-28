--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-03-26 21:14:46.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-03-28 10:57:59.000000000 +0100
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
