--- ./native_client/build/common.gypi.orig	2014-06-30 21:03:06.000000000 +0200
+++ ./native_client/build/common.gypi	2014-07-01 22:46:25.000000000 +0200
@@ -269,7 +269,7 @@
     ],
   },
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
