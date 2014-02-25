--- ./breakpad/breakpad.gyp.orig	2014-02-20 21:28:16.000000000 +0100
+++ ./breakpad/breakpad.gyp	2014-02-24 17:23:44.000000000 +0100
@@ -340,7 +340,7 @@
         },
       ],
     }],
-    [ 'OS=="linux" or OS=="android"', {
+    [ 'OS=="linux" or OS=="android" or os_bsd==1', {
       'conditions': [
         ['OS=="android"', {
           'defines': [
