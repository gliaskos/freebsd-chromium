--- ./third_party/webrtc/build/common.gypi.orig	2014-02-20 21:29:46.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-02-24 17:23:45.000000000 +0100
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
