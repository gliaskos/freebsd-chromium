--- ./ui/gl/gl.gyp.orig	2014-02-20 21:27:58.000000000 +0100
+++ ./ui/gl/gl.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -177,7 +177,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
