--- ./tools/gyp/test/library/src/library.gyp.orig	2014-02-20 21:29:38.000000000 +0100
+++ ./tools/gyp/test/library/src/library.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
