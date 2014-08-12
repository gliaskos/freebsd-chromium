--- ./base/base.gyp.orig	2014-07-15 21:01:13.000000000 +0200
+++ ./base/base.gyp	2014-08-12 20:02:14.000000000 +0200
@@ -129,7 +129,7 @@
           ],
           'link_settings': {
             'libraries': [
-              '-L/usr/local/lib -lexecinfo',
+              '-L/usr/local/lib -lexecinfo -lkvm',
             ],
           },
         }],
