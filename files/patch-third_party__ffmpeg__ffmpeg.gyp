--- ./third_party/ffmpeg/ffmpeg.gyp.orig	2010-12-13 12:07:40.000000000 +0100
+++ ./third_party/ffmpeg/ffmpeg.gyp	2011-01-07 14:17:11.000000000 +0100
@@ -81,8 +81,8 @@
     'ffmpeg_branding%': '<(branding)',
     'ffmpeg_variant%': '<(target_arch)',
 
-    'use_system_ffmpeg%': 0,
-    'use_system_yasm%': 0,
+    'use_system_ffmpeg%': 1,
+    'use_system_yasm%': 1,
     'build_ffmpegsumo%': 1,
     'use_system_vpx%': 0,

@@ -839,6 +839,16 @@
               },
             }],
 
+            ['use_system_vpx!=0', {
+              'direct_dependent_settings': {
+                'link_settings': {
+                  'libraries': [
+                    '-lvpx',
+                  ],
+                },
+              },
+            }],
+
             # Add pkg-config result to include path when use_system_ffmpeg!=0
             ['use_system_ffmpeg!=0', {
               'cflags': [
