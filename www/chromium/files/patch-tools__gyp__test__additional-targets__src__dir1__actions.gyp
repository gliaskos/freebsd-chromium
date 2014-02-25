--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-02-20 21:29:37.000000000 +0100
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
