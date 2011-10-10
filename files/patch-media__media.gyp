--- media/media.gyp	2011-10-10 19:43:31.570724030 +0000
+++ media/media.gyp.orig	2011-10-10 19:42:33.124728240 +0000
@@ -248,7 +248,7 @@
             ],
           },
           'conditions': [
-            ['OS=="linux" or OS=="freebsd"', {
+            ['OS=="linux"', {
               'conditions': [
                 ['use_pulseaudio == 1', {
                   'link_settings': {
