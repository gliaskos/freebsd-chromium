--- ./app/app_base.gypi.orig	2010-12-13 12:03:02.000000000 +0100
+++ ./app/app_base.gypi	2010-12-20 20:41:38.000000000 +0100
@@ -208,7 +208,6 @@
         'surface/io_surface_support_mac.cc',
         'surface/io_surface_support_mac.h',
         'surface/transport_dib.h',
-        'surface/transport_dib_linux.cc',
         'surface/transport_dib_mac.cc',
         'surface/transport_dib_win.cc',
         'table_model.cc',
@@ -327,7 +326,7 @@
             ['exclude', '^win/*'],
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'sources': [
             'gfx/gl/gl_context_egl.cc',
             'gfx/gl/gl_context_egl.h',
