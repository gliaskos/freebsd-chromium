--- base/base.gypi.orig	2011-03-20 22:02:04.346738061 +0200
+++ base/base.gypi	2011-03-20 22:02:04.473736325 +0200
@@ -343,11 +343,9 @@
                 'message_pump_glib_x.cc',
               ],
           }],
-          [ 'OS != "linux"', {
+          [ 'OS != "linux" and OS != "freebsd"', {
               'sources!': [
                 # Not automatically excluded by the *linux.cc rules.
-                'gtk_util.cc',
-                'gtk_util.h',
                 'linux_util.cc',
               ],
             },
@@ -462,6 +460,11 @@
             ],
         }],
         [ 'OS == "freebsd" or OS == "openbsd"', {
+          # XXX rene: maybe this chunk should go one day
+          'sources!': [
+            'file_util_linux.cc',
+            'process_linux.cc',
+          ],
           'link_settings': {
             'libraries': [
               '-L/usr/local/lib -lexecinfo',
