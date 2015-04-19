--- base/base.gyp.orig	2015-04-16 09:41:31.365078000 -0400
+++ base/base.gyp	2015-04-16 08:52:25.212482000 -0400
@@ -129,7 +129,7 @@
           ],
           'link_settings': {
             'libraries': [
-              '-L/usr/local/lib -lexecinfo',
+              '-L/usr/local/lib -L/usr/lib -lexecinfo -lkvm',
             ],
           },
         }],
