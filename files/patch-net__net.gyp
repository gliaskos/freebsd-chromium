--- ./net/net.gyp.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/net.gyp	2010-12-20 20:41:37.000000000 +0100
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
