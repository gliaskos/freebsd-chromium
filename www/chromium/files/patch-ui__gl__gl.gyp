--- ./ui/gl/gl.gyp.orig	2014-03-05 22:25:32.000000000 +0100
+++ ./ui/gl/gl.gyp	2014-03-07 23:57:27.000000000 +0100
@@ -170,7 +170,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
