--- base/base.gypi.orig	2011-01-29 10:49:10.000000000 +0100
+++ base/base.gypi	2011-02-06 23:50:48.000000000 +0100
@@ -179,6 +179,7 @@
           'process_util.cc',
           'process_util.h',
           'process_util_linux.cc',
+          'process_util_freebsd.cc',
           'process_util_mac.mm',
           'process_util_posix.cc',
           'process_util_win.cc',
@@ -352,11 +353,9 @@
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
                 'setproctitle_linux.c',
                 'setproctitle_linux.h',
@@ -640,6 +639,11 @@
           ],
         },],
         [ 'OS == "freebsd" or OS == "openbsd"', {
+          'sources!': [
+            'file_util_linux.cc',
+            'process_linux.cc',
+            'process_util_linux.cc',
+          ],
           'link_settings': {
             'libraries': [
               '-L/usr/local/lib -lexecinfo',
@@ -714,7 +718,7 @@
         },
       ],
     }],
-    [ 'OS == "linux" and internal_pdf', {
+    [ '(OS == "linux" or OS == "freebsd") and internal_pdf', {
       'targets': [
         {
           'target_name': 'base_fpic',
