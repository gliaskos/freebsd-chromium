--- ./third_party/WebKit/Source/web/web.gyp.orig	2014-03-26 21:19:51.000000000 +0100
+++ ./third_party/WebKit/Source/web/web.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -149,7 +149,7 @@
                       },
                     },
                 }],
-                ['OS == "linux"', {
+                ['OS == "linux" or os_bsd == 1', {
                     'dependencies': [
                         '<(DEPTH)/build/linux/system.gyp:fontconfig',
                     ],
