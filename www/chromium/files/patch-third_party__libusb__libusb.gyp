--- ./third_party/libusb/libusb.gyp.orig	2014-04-02 21:03:46.000000000 +0200
+++ ./third_party/libusb/libusb.gyp	2014-04-04 01:39:19.000000000 +0200
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
