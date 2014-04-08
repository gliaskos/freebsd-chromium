--- ./third_party/WebKit/Source/web/web.gyp.orig	2014-04-02 21:08:51.000000000 +0200
+++ ./third_party/WebKit/Source/web/web.gyp	2014-04-04 01:39:18.000000000 +0200
@@ -149,7 +149,7 @@
                       },
                     },
                 }],
-                ['OS == "linux"', {
+                ['OS == "linux" or os_bsd == 1', {
                     'dependencies': [
                         '<(DEPTH)/build/linux/system.gyp:fontconfig',
                     ],
