--- ui/gl/gl.gyp.orig	2014-10-10 09:15:32 UTC
+++ ui/gl/gl.gyp
@@ -169,7 +169,7 @@
         },
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
@@ -188,7 +188,7 @@
             '<(DEPTH)/third_party/khronos',
         ],
         }],
-        ['OS in ("win", "linux")', {
+        ['OS in ("win", "linux", "freebsd", "openbsd")', {
           'sources': [
             '<(gl_binding_output_dir)/gl_bindings_autogen_egl.cc',
             '<(gl_binding_output_dir)/gl_bindings_autogen_egl.h',
@@ -208,13 +208,13 @@
             'gl_bindings_autogen_gl_android.h',
           ],
         }],
-        ['OS in ("android", "linux")', {
+        ['OS in ("android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'gl_implementation_osmesa.cc',
             'gl_implementation_osmesa.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or os_bsd==1', {
           'sources': [
             'gl_image_linux_dma_buffer.cc',
             'gl_image_linux_dma_buffer.h',
