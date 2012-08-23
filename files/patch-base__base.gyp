--- ./base/base.gyp.orig	2012-08-17 03:01:51.000000000 +0200
+++ ./base/base.gyp	2012-08-23 22:31:42.000000000 +0200
@@ -191,6 +191,11 @@
             }],
           ],
         }],
+        ['OS=="freebsd"', {
+          'sources!': [
+            'test/test_file_util_linux.cc',
+          ],
+        }],
       ],
       'sources': [
         'third_party/nspr/prcpucfg.h',
