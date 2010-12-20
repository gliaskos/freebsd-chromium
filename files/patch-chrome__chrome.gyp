--- ./chrome/chrome.gyp.orig	2010-12-13 12:04:58.000000000 +0100
+++ ./chrome/chrome.gyp	2010-12-20 20:41:37.000000000 +0100
@@ -96,6 +96,10 @@
           }],
         ],
       },],
+      ['OS=="freebsd" or OS=="openbsd"', {
+        'platform_locale_settings_grd':
+            'app/resources/locale_settings_linux.grd',
+      },],
       ['OS=="mac"', {
         'tweak_info_plist_path': 'tools/build/mac/tweak_info_plist',
         'nacl_defines': [
@@ -672,7 +676,7 @@
         '..',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
@@ -794,7 +798,7 @@
             'gpu/media/mft_angle_video_device.h',
           ],
         }],
-        ['OS=="linux" and target_arch!="arm"', {
+        ['(OS=="linux" or OS=="freebsd") and target_arch!="arm"', {
           'sources': [
             'gpu/x_util.cc',
             'gpu/x_util.h',
@@ -1172,7 +1176,7 @@
             'service/cloud_print/print_system_win.cc',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
