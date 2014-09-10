--- tools/gyp/test/additional-targets/src/dir1/actions.gyp.orig	2014-09-04 00:29:43 UTC
+++ tools/gyp/test/additional-targets/src/dir1/actions.gyp
@@ -47,7 +47,7 @@
     },
   ],
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         'cflags': ['-fPIC'],
       },
