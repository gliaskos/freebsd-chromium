--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-03-12 20:21:41.000000000 +0100
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-03-14 09:23:25.000000000 +0100
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
