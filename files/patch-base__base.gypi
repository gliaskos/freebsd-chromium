--- ./base/base.gypi.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./base/base.gypi	2011-01-07 14:17:11.000000000 +0100
@@ -352,11 +352,9 @@
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
@@ -640,6 +638,10 @@
           ],
         },],
         [ 'OS == "freebsd" or OS == "openbsd"', {
+          'sources!': [
+            'file_util_linux.cc',
+            'process_linux.cc',
+          ],
           'link_settings': {
             'libraries': [
               '-L/usr/local/lib -lexecinfo',
@@ -714,7 +716,7 @@
         },
       ],
     }],
-    [ 'OS == "linux" and internal_pdf', {
+    [ '(OS == "linux" or OS == "freebsd") and internal_pdf', {
       'targets': [
         {
           'target_name': 'base_fpic',
