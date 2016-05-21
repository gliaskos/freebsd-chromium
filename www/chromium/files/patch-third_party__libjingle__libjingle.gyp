--- third_party/libjingle/libjingle.gyp.orig	2014-10-10 09:15:32 UTC
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
@@ -495,7 +495,7 @@
               ],
             }],
             # TODO(mallinath) - Enable SCTP for iOS.
-            ['OS!="ios"', {
+            ['OS!="ios" and os_bsd!=1', {
               'defines': [
                 'HAVE_SCTP',
               ],
