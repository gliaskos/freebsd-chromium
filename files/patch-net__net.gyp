--- ./net/net.gyp.orig	2010-12-16 02:11:31.000000000 +0100
+++ ./net/net.gyp	2010-12-20 20:15:08.000000000 +0100
@@ -1002,7 +1002,7 @@
             ],
           }
         ],
-        [ 'OS == "linux"', {
+        [ 'OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
@@ -1205,7 +1205,7 @@
             }],
           ],
         }],
-        ['OS == "linux"', {
+        ['OS == "linux" or OS=="freebsd"', {
           'conditions': [
             ['linux_use_tcmalloc==1', {
               'dependencies': [
