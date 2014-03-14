--- ./third_party/webrtc/build/common.gypi.orig	2014-03-12 20:24:07.000000000 +0100
+++ ./third_party/webrtc/build/common.gypi	2014-03-14 09:23:25.000000000 +0100
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
