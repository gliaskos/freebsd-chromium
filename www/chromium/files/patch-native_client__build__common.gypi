--- ./native_client/build/common.gypi.orig	2014-02-20 21:28:56.000000000 +0100
+++ ./native_client/build/common.gypi	2014-02-24 17:23:45.000000000 +0100
@@ -262,7 +262,7 @@
     ],
   },
   'conditions': [
-    ['OS=="linux"', {
+    ['OS=="linux" or OS=="freebsd"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
