--- ./third_party/WebKit/Source/core/core.gyp.orig	2014-03-26 21:20:00.000000000 +0100
+++ ./third_party/WebKit/Source/core/core.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -627,7 +627,7 @@
           # Due to a bug in gcc 4.6 in android NDK, we get warnings about uninitialized variable.
           'cflags': ['-Wno-uninitialized'],
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
@@ -671,7 +671,7 @@
         ['OS=="win" and buildtype=="Official"', {
           'msvs_shard': 19,
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
