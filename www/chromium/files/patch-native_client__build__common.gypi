--- ./native_client/build/common.gypi.orig	2014-03-04 03:18:12.000000000 +0100
+++ ./native_client/build/common.gypi	2014-03-07 14:10:34.000000000 +0100
@@ -262,7 +262,7 @@
     ],
   },
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
