--- ./ui/gl/gl.gyp.orig	2014-03-12 20:22:40.000000000 +0100
+++ ./ui/gl/gl.gyp	2014-03-14 09:23:25.000000000 +0100
@@ -170,7 +170,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
