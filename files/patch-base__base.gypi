--- ./base/base.gypi.orig	2010-12-20 20:09:09.000000000 +0100
+++ ./base/base.gypi	2010-12-20 20:15:08.000000000 +0100
@@ -354,8 +354,6 @@
           [ 'OS != "linux"', {
               'sources!': [
                 # Not automatically excluded by the *linux.cc rules.
-                'gtk_util.cc',
-                'gtk_util.h',
                 'linux_util.cc',
                 'setproctitle_linux.c',
                 'setproctitle_linux.h',
@@ -479,6 +477,11 @@
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
