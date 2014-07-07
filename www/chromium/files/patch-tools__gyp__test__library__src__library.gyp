--- ./tools/gyp/test/library/src/library.gyp.orig	2014-06-30 21:04:03.000000000 +0200
+++ ./tools/gyp/test/library/src/library.gyp	2014-07-07 15:12:51.000000000 +0200
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
