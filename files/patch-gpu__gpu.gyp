--- ./gpu/gpu.gyp.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./gpu/gpu.gyp	2010-12-20 20:41:37.000000000 +0100
@@ -180,7 +180,7 @@
         'command_buffer/service/texture_manager.cc',
       ],
       'conditions': [
-        ['OS == "linux"', {
+        ['OS == "linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
