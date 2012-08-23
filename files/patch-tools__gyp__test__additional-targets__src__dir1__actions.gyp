--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2012-08-17 03:04:26.000000000 +0200
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2012-08-23 22:31:45.000000000 +0200
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
