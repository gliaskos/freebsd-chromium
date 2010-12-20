--- ./chrome/chrome_renderer.gypi.orig	2010-12-13 12:04:58.000000000 +0100
+++ ./chrome/chrome_renderer.gypi	2010-12-20 20:41:37.000000000 +0100
@@ -282,6 +282,14 @@
         }],
         # BSD-specific rules.
         ['OS=="openbsd" or OS=="freebsd"', {
+          'conditions': [
+            [ 'linux_use_tcmalloc==1', {
+                'dependencies': [
+                  '../base/allocator/allocator.gyp:allocator',
+                ],
+	      },
+	    ],
+	  ],
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
