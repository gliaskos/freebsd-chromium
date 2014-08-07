--- ./tools/gyp/test/library/src/library.gyp.orig	2014-07-15 21:04:12.000000000 +0200
+++ ./tools/gyp/test/library/src/library.gyp	2014-07-20 18:13:09.000000000 +0200
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
