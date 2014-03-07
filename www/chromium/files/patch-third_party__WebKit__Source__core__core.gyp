--- ./third_party/WebKit/Source/core/core.gyp.orig	2014-03-04 03:21:42.000000000 +0100
+++ ./third_party/WebKit/Source/core/core.gyp	2014-03-07 14:10:35.000000000 +0100
@@ -593,7 +593,7 @@
         ['exclude', 'platform/Theme\\.cpp$'],
       ],
       'conditions': [
-        ['OS!="linux"', {
+        ['OS!="linux" and os_bsd!=1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
@@ -732,7 +732,7 @@
           # Due to a bug in gcc 4.6 in android NDK, we get warnings about uninitialized variable.
           'cflags': ['-Wno-uninitialized'],
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
@@ -776,7 +776,7 @@
         ['OS=="win" and buildtype=="Official"', {
           'msvs_shard': 19,
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources/': [
             ['exclude', 'Linux\\.cpp$'],
           ],
