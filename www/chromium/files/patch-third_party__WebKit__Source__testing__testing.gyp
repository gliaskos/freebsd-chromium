--- ./third_party/WebKit/Source/testing/testing.gyp.orig	2014-02-20 21:32:26.000000000 +0100
+++ ./third_party/WebKit/Source/testing/testing.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -307,5 +307,12 @@
                 # FIXME: Add -Wglobal-constructors after fixing existing bugs.
             },
         }],
+        ['OS=="freebsd"', {
+            'target_defaults': {
+                'include_dirs': [
+                    '/usr/local/include',
+                ],
+            },
+        }],
     ], # conditions
 }
