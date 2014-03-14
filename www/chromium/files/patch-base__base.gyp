--- ./base/base.gyp.orig	2014-03-12 20:21:44.000000000 +0100
+++ ./base/base.gyp	2014-03-14 09:23:25.000000000 +0100
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
