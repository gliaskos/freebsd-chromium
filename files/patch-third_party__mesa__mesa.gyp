--- ./third_party/mesa/mesa.gyp.orig	2010-12-13 12:03:46.000000000 +0100
+++ ./third_party/mesa/mesa.gyp	2010-12-20 20:41:37.000000000 +0100
@@ -19,7 +19,7 @@
           'HAVE_STRNLEN',
         ],
       }],
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'cflags': [
           '-fPIC',
         ],
