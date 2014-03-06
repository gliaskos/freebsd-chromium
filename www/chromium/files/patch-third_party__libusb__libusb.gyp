--- ./third_party/libusb/libusb.gyp.orig	2014-02-20 21:28:37.000000000 +0100
+++ ./third_party/libusb/libusb.gyp	2014-02-24 17:23:45.000000000 +0100
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
