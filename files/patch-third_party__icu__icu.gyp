--- ./third_party/icu/icu.gyp.orig	2010-12-13 12:08:43.000000000 +0100
+++ ./third_party/icu/icu.gyp	2010-12-20 20:41:37.000000000 +0100
@@ -54,7 +54,7 @@
             }, {  # else: OS != "win"
               'sources!': ['icudt42.dll'],
             }],
-            [ 'OS != "linux" or chromeos == 1', {
+            [ '(OS != "linux" and OS != "freebsd") or chromeos == 1', {
               'sources!': ['linux/icudt42l_dat.s'],
             }],
             [ 'OS != "mac"', {
@@ -227,7 +227,7 @@
             ],
           },
           'conditions': [
-            [ 'OS=="linux"', {
+            [ 'OS=="linux" or OS=="freebsd"', {
               # Since ICU wants to internally use its own deprecated APIs, don't
               # complain about it.
               'cflags': [
