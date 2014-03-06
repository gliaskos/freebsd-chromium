--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-02-20 21:28:41.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-02-24 17:23:45.000000000 +0100
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
