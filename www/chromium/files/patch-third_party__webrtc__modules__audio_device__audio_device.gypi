--- ./third_party/webrtc/modules/audio_device/audio_device.gypi.orig	2014-03-12 20:23:54.000000000 +0100
+++ ./third_party/webrtc/modules/audio_device/audio_device.gypi	2014-03-14 09:23:25.000000000 +0100
@@ -47,7 +47,7 @@
         'dummy/audio_device_utility_dummy.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or os_bsd==1', {
           'include_dirs': [
             'linux',
           ],
@@ -141,7 +141,7 @@
                 ],
               },
             }],
-            ['OS=="linux"', {
+            ['OS=="linux" or OS=="freebsd"', {
               'defines': [
                 'LINUX_ALSA',
               ],
