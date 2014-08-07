--- ./third_party/khronos/khronos.gyp.orig	2014-07-15 21:03:01.000000000 +0200
+++ ./third_party/khronos/khronos.gyp	2014-07-20 18:13:09.000000000 +0200
@@ -11,6 +11,7 @@
         'include_dirs': [
           '.',
           '../../gpu',  # Contains GLES2/gl2chromium.h
+          '<(prefix_dir)/include',
         ],
       },
     },
