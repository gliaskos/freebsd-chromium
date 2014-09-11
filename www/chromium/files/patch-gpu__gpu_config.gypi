--- gpu/gpu_config.gypi.orig	2014-09-11 08:41:46.000000000 +0200
+++ gpu/gpu_config.gypi	2014-09-11 13:55:09.000000000 +0200
@@ -70,12 +70,18 @@
         '../build/linux/system.gyp:libpci',
       ],
     }],
-    ['OS=="linux" and use_x11==1', {
+    ['(OS=="linux" or os_bsd==1) and use_x11==1', {
       'dependencies': [
         '../build/linux/system.gyp:x11',
         '../build/linux/system.gyp:xext',
         '../third_party/libXNVCtrl/libXNVCtrl.gyp:libXNVCtrl',
       ],
     }],
+    ['os_bsd==1', {
+      'sources!': [
+        'config/gpu_info_collector_linux.cc',
+        'config/gpu_info_collector_linux.h',
+      ],
+    }],
   ],
 }
