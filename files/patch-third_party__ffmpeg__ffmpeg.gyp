--- ./third_party/ffmpeg/ffmpeg.gyp.orig	2010-12-16 02:13:18.000000000 +0100
+++ ./third_party/ffmpeg/ffmpeg.gyp	2010-12-20 20:15:08.000000000 +0100
@@ -81,8 +81,8 @@
     'ffmpeg_branding%': '<(branding)',
     'ffmpeg_variant%': '<(target_arch)',
 
-    'use_system_ffmpeg%': 0,
-    'use_system_yasm%': 0,
+    'use_system_ffmpeg%': 1,
+    'use_system_yasm%': 1,
     'build_ffmpegsumo%': 1,
     'use_system_vpx%': 0,
 
