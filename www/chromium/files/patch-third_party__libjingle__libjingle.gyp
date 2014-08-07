--- ./third_party/libjingle/libjingle.gyp.orig	2014-07-15 21:03:04.000000000 +0200
+++ ./third_party/libjingle/libjingle.gyp	2014-07-20 18:13:09.000000000 +0200
@@ -473,7 +473,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
