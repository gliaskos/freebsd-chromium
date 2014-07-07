--- ./media/media.gyp.orig	2014-06-30 21:01:16.000000000 +0200
+++ ./media/media.gyp	2014-07-01 22:46:25.000000000 +0200
@@ -658,7 +658,7 @@
             'audio/openbsd/audio_manager_openbsd.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'conditions': [
             ['use_x11==1', {
               'dependencies': [
@@ -917,7 +917,7 @@
             'base/simd/convert_yuv_to_rgb_x86.cc',
           ],
         }],
-        ['OS!="linux" and OS!="win"', {
+        ['OS!="linux" and OS!="win" and OS!="freebsd"', {
           'sources!': [
             'base/keyboard_event_counter.cc',
             'base/keyboard_event_counter.h',
