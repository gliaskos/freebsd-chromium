--- ./third_party/webrtc/build/common.gypi.orig	2014-03-26 21:17:09.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-03-28 10:57:59.000000000 +0100
@@ -272,6 +272,13 @@
           'WEBRTC_LINUX',
         ],
       }],
+      ['os_bsd==1', {
+        'defines': [
+          'WEBRTC_BSD',
+          'WEBRTC_LINUX',
+          'WEBRTC_THREAD_RR',
+        ],
+      }],
       ['OS=="mac"', {
         'defines': [
           'WEBRTC_MAC',
