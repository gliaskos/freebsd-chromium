--- ./base/base.gyp.orig	2014-03-19 20:01:55.000000000 +0100
+++ ./base/base.gyp	2014-03-21 00:27:12.000000000 +0100
@@ -820,6 +820,11 @@
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
