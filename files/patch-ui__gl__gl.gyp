--- ui/gl/gl.gyp.orig	2014-10-10 09:15:32 UTC
+++ ui/gl/gl.gyp
@@ -121,7 +121,7 @@
         'sync_control_vsync_provider.h',
       ],
       'conditions': [
-        ['OS in ("win", "android", "linux")', {
+        ['OS in ("win", "android", "linux", "freebsd", "openbsd")', {
           'sources': [
             'egl_util.cc',
             'egl_util.h',
@@ -142,13 +142,13 @@
             '<(DEPTH)/third_party/khronos',
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
