--- ./ui/gl/gl.gyp.orig	2014-04-30 22:42:53.000000000 +0200
+++ ./ui/gl/gl.gyp	2014-05-04 14:15:36.000000000 +0200
@@ -171,7 +171,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
