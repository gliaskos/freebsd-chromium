--- ./third_party/libvpx/libvpx.gyp.orig	2010-12-13 12:49:12.000000000 +0100
+++ ./third_party/libvpx/libvpx.gyp	2010-12-20 20:41:38.000000000 +0100
@@ -35,6 +35,11 @@
             'libvpx_path': 'lib/linux/arm',
           },
         }],
+        ['OS=="freebsd"', {
+          'variables': {
+            'libvpx_path': '/usr/local/lib',
+         },
+        }],
         ['OS=="win"', {
           'variables': {
             'libvpx_path': 'lib/win/ia32',
