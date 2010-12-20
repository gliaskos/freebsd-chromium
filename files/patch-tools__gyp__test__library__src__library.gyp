--- ./tools/gyp/test/library/src/library.gyp.orig	2010-12-13 12:49:16.000000000 +0100
+++ ./tools/gyp/test/library/src/library.gyp	2010-12-20 20:41:38.000000000 +0100
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
