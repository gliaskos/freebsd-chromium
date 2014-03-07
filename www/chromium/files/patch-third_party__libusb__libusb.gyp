--- ./third_party/libusb/libusb.gyp.orig	2014-03-04 03:16:21.000000000 +0100
+++ ./third_party/libusb/libusb.gyp	2014-03-07 14:10:35.000000000 +0100
@@ -93,6 +93,19 @@
           ],
           'msvs_disabled_warnings': [ 4267 ],
         }],
+        ['OS == "freebsd"', {
+          'type': 'none',
+          'sources/': [
+            ['exclude', '^src/libusb/'],
+          ],
+          'direct_dependent_settings': {
+            'link_settings': {
+              'libraries': [
+                '-lusb',
+              ],
+            },
+          },
+        }],
       ],
     },
   ],
