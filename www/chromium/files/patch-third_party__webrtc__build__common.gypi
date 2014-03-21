--- ./third_party/webrtc/build/common.gypi.orig	2014-03-19 20:04:11.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-03-21 00:27:13.000000000 +0100
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
