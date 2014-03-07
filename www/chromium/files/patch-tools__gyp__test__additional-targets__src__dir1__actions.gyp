--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-03-05 22:26:36.000000000 +0100
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2014-03-07 23:57:27.000000000 +0100
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
