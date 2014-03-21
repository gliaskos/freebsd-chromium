--- ./tools/gyp/test/library/src/library.gyp.orig	2014-03-19 20:04:09.000000000 +0100
+++ ./tools/gyp/test/library/src/library.gyp	2014-03-21 00:27:13.000000000 +0100
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
