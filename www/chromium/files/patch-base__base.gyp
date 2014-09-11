--- base/base.gyp.orig	2014-09-11 11:45:24.000000000 +0200
+++ base/base.gyp	2014-09-11 13:19:15.000000000 +0200
@@ -129,7 +129,7 @@
           ],
           'link_settings': {
             'libraries': [
-              '-L/usr/local/lib -lexecinfo',
+              '-L/usr/local/lib -lexecinfo -lkvm',
             ],
           },
         }],
@@ -784,6 +784,11 @@
             ['include', '^debug/proc_maps_linux_unittest\\.cc$'],
           ],
         }],
+        ['OS == "freebsd"', {
+          'sources!': [
+            'debug/proc_maps_linux_unittest.cc',
+          ],
+        }],
       ],  # target_conditions
     },
     {
