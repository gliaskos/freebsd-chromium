--- ./third_party/WebKit/Source/web/web.gyp.orig	2014-02-20 21:32:27.000000000 +0100
+++ ./third_party/WebKit/Source/web/web.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -147,7 +147,7 @@
                       },
                     },
                 }],
-                ['OS == "linux"', {
+                ['OS == "linux" or os_bsd == 1', {
                     'dependencies': [
                         '<(DEPTH)/build/linux/system.gyp:fontconfig',
                     ],
