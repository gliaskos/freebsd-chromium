--- ./media/media.gyp.orig	2014-03-04 03:17:26.000000000 +0100
+++ ./media/media.gyp	2014-03-07 14:10:34.000000000 +0100
@@ -606,7 +606,7 @@
             'audio/openbsd/audio_manager_openbsd.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'variables': {
             'conditions': [
               ['sysroot!=""', {
@@ -871,7 +871,7 @@
             'ENABLE_EAC3_PLAYBACK',
           ],
         }],
-        ['OS!="linux" and OS!="win"', {
+        ['OS!="linux" and OS!="win" and OS!="freebsd"', {
           'sources!': [
             'base/keyboard_event_counter.cc',
             'base/keyboard_event_counter.h',
