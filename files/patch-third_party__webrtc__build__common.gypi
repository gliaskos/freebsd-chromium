--- third_party/webrtc/build/common.gypi.orig	2014-10-10 09:16:13 UTC
+++ third_party/webrtc/build/common.gypi
@@ -350,6 +350,13 @@
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
