--- ./base/base.gyp.orig	2014-06-30 21:01:41.000000000 +0200
+++ ./base/base.gyp	2014-07-14 22:49:46.000000000 +0200
@@ -634,6 +634,11 @@
         'module_dir': 'base'
       },
       'conditions': [
+        ['OS == "freebsd"', {
+            'libraries': [
+              '-lkvm',
+            ],
+        }],
         ['OS == "android"', {
           'dependencies': [
             'android/jni_generator/jni_generator.gyp:jni_generator_tests',
@@ -763,6 +768,11 @@
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
