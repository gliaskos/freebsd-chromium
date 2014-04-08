--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-04-02 21:06:02.000000000 +0200
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2014-04-04 01:39:19.000000000 +0200
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
