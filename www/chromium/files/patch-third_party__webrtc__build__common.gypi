--- ./third_party/webrtc/build/common.gypi.orig	2014-03-05 22:26:41.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-03-07 23:57:27.000000000 +0100
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
