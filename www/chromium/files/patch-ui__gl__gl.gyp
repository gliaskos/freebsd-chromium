--- ./ui/gl/gl.gyp.orig	2014-03-04 03:17:20.000000000 +0100
+++ ./ui/gl/gl.gyp	2014-03-07 14:10:36.000000000 +0100
@@ -177,7 +177,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
