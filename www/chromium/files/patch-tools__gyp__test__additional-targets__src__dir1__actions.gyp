--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-03-26 21:17:02.000000000 +0100
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
