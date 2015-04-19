--- third_party/libjingle/libjingle.gyp.orig	2014-10-10 09:15:32 UTC
+++ third_party/libjingle/libjingle.gyp
@@ -490,7 +490,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
