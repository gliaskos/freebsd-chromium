--- ./third_party/libXNVCtrl/libXNVCtrl.gyp.orig	2014-04-02 21:03:50.000000000 +0200
+++ ./third_party/libXNVCtrl/libXNVCtrl.gyp	2014-04-04 01:39:19.000000000 +0200
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
