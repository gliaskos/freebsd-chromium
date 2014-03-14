--- ./tools/gyp/test/library/src/library.gyp.orig	2014-03-12 20:24:02.000000000 +0100
+++ ./tools/gyp/test/library/src/library.gyp	2014-03-14 09:23:25.000000000 +0100
@@ -48,7 +48,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Support 64-bit shared libs (also works fine for 32-bit).
         'cflags': ['-fPIC'],
