--- media/media.gyp.orig	2011-01-22 22:01:46.000000000 +0100
+++ media/media.gyp	2011-01-23 16:24:33.000000000 +0100
@@ -167,6 +167,9 @@
           'link_settings': {
             'libraries': [
               '-lasound',
+              '-lavcodec',
+              '-lavformat',
+              '-lavutil',
             ],
           },
         }],
