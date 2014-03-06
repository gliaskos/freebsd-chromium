--- ./third_party/libjingle/libjingle.gyp.orig	2014-02-20 21:28:39.000000000 +0100
+++ ./third_party/libjingle/libjingle.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -541,7 +541,7 @@
             '<(libjingle_source)/talk/base/unixfilesystem.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or os_bsd==1', {
           'sources': [
             '<(libjingle_source)/talk/base/latebindingsymboltable.cc',
             '<(libjingle_source)/talk/base/latebindingsymboltable.h',
@@ -790,7 +790,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
