--- ./third_party/WebKit/Source/web/web.gyp.orig	2014-03-12 20:27:07.000000000 +0100
+++ ./third_party/WebKit/Source/web/web.gyp	2014-03-14 09:23:25.000000000 +0100
@@ -149,7 +149,7 @@
                       },
                     },
                 }],
-                ['OS == "linux"', {
+                ['OS == "linux" or os_bsd == 1', {
                     'dependencies': [
                         '<(DEPTH)/build/linux/system.gyp:fontconfig',
                     ],
