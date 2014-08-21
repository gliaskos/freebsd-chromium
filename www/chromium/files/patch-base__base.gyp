--- ./base/base.gyp.orig	2014-08-21 23:16:03.000000000 +0200
+++ ./base/base.gyp	2014-08-21 23:18:11.000000000 +0200
@@ -129,7 +129,7 @@
           ],
           'link_settings': {
             'libraries': [
-              '-L/usr/local/lib -lexecinfo',
+              '-L/usr/local/lib -lexecinfo -lkvm',
             ],
           },
         }],
