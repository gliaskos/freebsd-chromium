--- ./base/base.gyp.orig	2014-06-30 21:01:41.000000000 +0200
+++ ./base/base.gyp	2014-07-01 22:46:25.000000000 +0200
@@ -763,6 +763,11 @@
             ['include', '^debug/proc_maps_linux_unittest\\.cc$'],
           ],
         }],
+        ['<(os_bsd) == 1', {
+          'sources/': [
+            ['exclude', '^debug/proc_maps_linux_unittest\\.cc$'],
+          ],
+        }],
       ],  # target_conditions
     },
     {
