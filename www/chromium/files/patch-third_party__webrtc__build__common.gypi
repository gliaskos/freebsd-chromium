--- ./third_party/webrtc/build/common.gypi.orig	2014-03-04 03:18:45.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-03-07 14:10:35.000000000 +0100
@@ -269,6 +269,13 @@
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
