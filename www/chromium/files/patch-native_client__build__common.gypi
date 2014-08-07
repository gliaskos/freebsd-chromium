--- ./native_client/build/common.gypi.orig	2014-07-15 21:03:14.000000000 +0200
+++ ./native_client/build/common.gypi	2014-07-20 18:13:09.000000000 +0200
@@ -269,7 +269,7 @@
     ],
   },
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
