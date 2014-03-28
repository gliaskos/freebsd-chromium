--- ./ui/gl/gl.gyp.orig	2014-03-26 21:14:53.000000000 +0100
+++ ./ui/gl/gl.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -170,7 +170,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
