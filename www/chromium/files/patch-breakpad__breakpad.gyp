--- breakpad/breakpad.gyp.orig	2015-04-18 22:31:56.000000000 +0200
+++ breakpad/breakpad.gyp	2015-04-18 22:33:18.000000000 +0200
@@ -409,7 +409,7 @@
         },
       ],
     }],
-    [ 'OS=="linux" or OS=="android" or os_bsd==1', {
+    [ 'OS=="linux" or OS=="android" or OS=="freebsd"', {
       'conditions': [
         ['OS=="android"', {
           'defines': [
