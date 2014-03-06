--- ./base/base.gyp.orig	2014-02-20 21:28:47.000000000 +0100
+++ ./base/base.gyp	2014-02-24 17:23:44.000000000 +0100
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
