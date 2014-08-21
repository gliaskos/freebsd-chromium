--- ./native_client/build/common.gypi.orig	2014-08-13 21:03:17.000000000 +0200
+++ ./native_client/build/common.gypi	2014-08-21 22:35:54.000000000 +0200
@@ -286,7 +286,7 @@
     ],
   },
   'conditions': [
-    ['OS=="linux" or OS=="android"', {
+    ['OS=="linux" or OS=="android" or OS=="freebsd"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
