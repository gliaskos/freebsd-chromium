--- ./third_party/libjingle/libjingle.gyp.orig	2014-06-30 21:02:59.000000000 +0200
+++ ./third_party/libjingle/libjingle.gyp	2014-07-01 22:46:25.000000000 +0200
@@ -473,7 +473,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
