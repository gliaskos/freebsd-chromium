--- third_party/WebKit/Source/core/core.gyp.orig	2014-10-10 09:34:37 UTC
+++ third_party/WebKit/Source/core/core.gyp
@@ -589,7 +589,7 @@
           # Due to a bug in gcc 4.6 in android NDK, we get warnings about uninitialized variable.
           'cflags': ['-Wno-uninitialized'],
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
@@ -627,7 +627,7 @@
         ['OS=="win" and (buildtype=="Official" or (fastbuild==0 and win_z7==1))', {
           'msvs_shard': 19,
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
