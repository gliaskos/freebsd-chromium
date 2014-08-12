--- breakpad/breakpad.gyp.orig	2014-07-15 21:02:42.000000000 +0200
+++ breakpad/breakpad.gyp	2014-08-12 21:16:51.000000000 +0200
@@ -340,7 +340,7 @@
         },
       ],
     }],
-    [ 'OS=="linux" or OS=="android" or OS=="freebsd"', {
+    [ 'OS=="linux" or OS=="android" or os_bsd==1', {
       'conditions': [
         ['OS=="android"', {
           'defines': [
