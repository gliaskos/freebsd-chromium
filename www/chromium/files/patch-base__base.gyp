--- ./base/base.gyp.orig	2014-03-04 03:16:26.000000000 +0100
+++ ./base/base.gyp	2014-03-07 14:10:31.000000000 +0100
@@ -860,6 +860,11 @@
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
