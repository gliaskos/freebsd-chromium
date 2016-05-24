--- third_party/WebKit/Source/platform/blink_platform.gyp.orig	2016-05-11 19:02:33 UTC
+++ third_party/WebKit/Source/platform/blink_platform.gyp
@@ -38,6 +38,9 @@
   'targets': [{
     'target_name': 'blink_common',
     'type': '<(component)',
+    'include_dirs': [
+      '<(prefix_dir)/include',
+    ],
     'variables': { 'enable_wexit_time_destructors': 1 },
     'dependencies': [
       '../config.gyp:config',
@@ -219,7 +222,7 @@
           ['include', 'graphics/cpu/x86/WebGLImageConversionSSE\\.h$'],
         ],
       }],
-      ['OS=="linux" or OS=="android" or OS=="win"', {
+      ['OS=="linux" or OS=="android" or OS=="win" or os_bsd==1', {
         'sources/': [
           # Cherry-pick files excluded by the broader regular expressions above.
           ['include', 'fonts/opentype/OpenTypeTypes\\.h$'],
@@ -230,7 +233,7 @@
         ],
       },
       ],
-      ['OS=="linux" or OS=="android"', {
+      ['OS=="linux" or OS=="android" or os_bsd==1', {
         'sources/': [
           ['include', 'fonts/linux/FontPlatformDataLinux\\.cpp$'],
         ]
@@ -315,7 +318,7 @@
           ['exclude', 'scroll/ScrollbarThemeMac'],
         ],
       }],
-      ['OS != "linux" and OS != "mac" and OS != "win"', {
+      ['OS != "linux" and OS != "mac" and OS != "win" and os_bsd != 1', {
         'sources/': [
           ['exclude', 'VDMX[^/]+\\.(cpp|h)$'],
         ],
@@ -358,7 +361,7 @@
           ['exclude', 'Android\\.cpp$'],
         ],
       }],
-      ['OS=="linux"', {
+      ['OS=="linux" or os_bsd==1', {
         'dependencies': [
           '<(DEPTH)/build/linux/system.gyp:fontconfig',
         ],
@@ -371,6 +374,11 @@
           ['exclude', 'scroll/ScrollbarThemeAura\\.(cpp|h)'],
         ],
       }],
+      ['use_system_icu==1', {
+        'defines': [
+          'USING_SYSTEM_ICU',
+        ],
+      }],
       ['"WTF_USE_WEBAUDIO_FFMPEG=1" in feature_defines', {
         'include_dirs': [
           '<(DEPTH)/third_party/ffmpeg',
