--- third_party/libjingle/libjingle.gyp.orig	2014-09-04 00:29:11 UTC
+++ third_party/libjingle/libjingle.gyp
@@ -484,7 +484,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
