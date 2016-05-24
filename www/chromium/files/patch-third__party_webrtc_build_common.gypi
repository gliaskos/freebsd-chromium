--- third_party/webrtc/build/common.gypi.orig	2016-05-11 19:04:03 UTC
+++ third_party/webrtc/build/common.gypi
@@ -390,6 +390,13 @@
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
