--- ui/gl/gl.gyp.orig	2014-09-04 00:29:11 UTC
+++ ui/gl/gl.gyp
@@ -174,7 +174,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
@@ -195,7 +195,7 @@
             '<(DEPTH)/third_party/khronos',
         ],
         }],
-        ['OS in ("android", "linux")', {
+        ['OS in ("android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'gl_implementation_osmesa.cc',
             'gl_implementation_osmesa.h',
