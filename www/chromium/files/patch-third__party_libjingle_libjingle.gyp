--- third_party/libjingle/libjingle.gyp.orig	2016-05-11 19:02:34 UTC
+++ third_party/libjingle/libjingle.gyp
@@ -128,6 +128,8 @@
         ['os_bsd==1', {
           'defines': [
             'BSD',
+            'WEBRTC_LINUX',
+            'WEBRTC_BSD',
           ],
         }],
         ['OS=="openbsd"', {
@@ -198,6 +200,8 @@
       ['os_bsd==1', {
         'defines': [
           'BSD',
+          'WEBRTC_LINUX',
+          'WEBRTC_BSD',
         ],
       }],
       ['OS=="openbsd"', {
@@ -397,7 +401,7 @@
           ],
           'conditions': [
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
