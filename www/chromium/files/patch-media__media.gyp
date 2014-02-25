--- ./media/media.gyp.orig	2014-02-20 21:28:01.000000000 +0100
+++ ./media/media.gyp	2014-02-24 17:23:45.000000000 +0100
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
