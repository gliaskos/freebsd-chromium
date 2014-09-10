--- base/base.gyp.orig	2014-09-04 00:29:09 UTC
+++ base/base.gyp
@@ -129,7 +129,7 @@
           ],
           'link_settings': {
             'libraries': [
-              '-L/usr/local/lib -lexecinfo',
+              '-L/usr/local/lib -lexecinfo -lkvm',
             ],
           },
         }],
