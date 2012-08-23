--- ./ui/surface/surface.gyp.orig	2012-08-17 03:02:27.000000000 +0200
+++ ./ui/surface/surface.gyp	2012-08-23 22:31:45.000000000 +0200
@@ -14,6 +14,14 @@
           '<(DEPTH)/third_party/angle/include',
         ],
       }],
+      ['OS == "freebsd"', {
+        'sources!': [
+          'transport_dib_linux.cc',
+        ],
+        'sources': [
+          'transport_dib_freebsd.cc',
+        ],
+      }],
     ],
   },
   'targets': [
