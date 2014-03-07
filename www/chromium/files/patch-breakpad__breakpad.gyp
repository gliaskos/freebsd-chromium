--- ./breakpad/breakpad.gyp.orig	2014-03-04 03:17:39.000000000 +0100
+++ ./breakpad/breakpad.gyp	2014-03-07 14:10:32.000000000 +0100
@@ -340,7 +340,7 @@
         },
       ],
     }],
-    [ 'OS=="linux" or OS=="android"', {
+    [ 'OS=="linux" or OS=="android" or os_bsd==1', {
       'conditions': [
         ['OS=="android"', {
           'defines': [
