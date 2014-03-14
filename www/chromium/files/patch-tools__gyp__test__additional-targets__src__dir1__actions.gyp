--- ./tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-03-12 20:24:02.000000000 +0100
+++ ./tools/gyp/test/additional-targets/src/dir1/actions.gyp	2014-03-14 09:23:25.000000000 +0100
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
