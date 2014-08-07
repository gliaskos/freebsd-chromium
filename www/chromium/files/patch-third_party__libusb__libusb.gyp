--- ./third_party/libusb/libusb.gyp.orig	2014-07-15 21:03:05.000000000 +0200
+++ ./third_party/libusb/libusb.gyp	2014-07-20 18:13:09.000000000 +0200
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
