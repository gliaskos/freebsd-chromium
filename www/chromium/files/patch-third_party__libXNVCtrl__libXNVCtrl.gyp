--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-07-15 21:03:04.000000000 +0200
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-07-20 18:13:09.000000000 +0200
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
