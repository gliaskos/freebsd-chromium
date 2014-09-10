--- breakpad/breakpad.gyp.orig	2014-09-04 00:04:10 UTC
+++ breakpad/breakpad.gyp
@@ -348,7 +348,7 @@
         },
       ],
     }],
-    [ 'OS=="linux" or OS=="android" or OS=="freebsd"', {
+    [ 'OS=="linux" or OS=="android" or os_bsd==1', {
       'conditions': [
         ['OS=="android"', {
           'defines': [
