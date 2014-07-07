--- ./third_party/webrtc/build/common.gypi.orig	2014-06-30 21:04:19.000000000 +0200
+++ ./third_party/webrtc/build/common.gypi	2014-07-07 15:12:51.000000000 +0200
@@ -286,6 +286,13 @@
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
