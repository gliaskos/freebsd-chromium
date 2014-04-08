--- ./ui/gl/gl.gyp.orig	2014-04-02 21:04:03.000000000 +0200
+++ ./ui/gl/gl.gyp	2014-04-04 01:39:19.000000000 +0200
@@ -170,7 +170,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
