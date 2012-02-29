--- third_party/WebKit/Source/WebCore/WebCore.gyp/WebCore.gyp.orig	2012-02-15 03:05:23.000000000 +0100
+++ third_party/WebKit/Source/WebCore/WebCore.gyp/WebCore.gyp	2012-02-27 23:32:02.000000000 +0100
@@ -215,6 +215,11 @@
               '../platform/graphics/cg',
         ],
       }],
+      ['no_log2==1', {
+        'defines': [
+          'NO_LOG2',
+        ],
+      }],
       ['OS=="win"', {
         'webcore_include_dirs': [
           '../page/win',
@@ -1095,7 +1100,7 @@
             'include_dirs+++': ['../dom'],
           },
         }],
-        ['(OS=="linux" or OS=="win") and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
+        ['(OS=="linux" or OS=="freebsd" or OS=="win") and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
           'include_dirs': [
             '<(chromium_src_dir)/third_party/fftw/api',
           ],
@@ -1308,7 +1313,7 @@
             'include_dirs++': ['../dom'],
           },
         }],
-        ['(OS=="linux" or OS=="win") and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
+        ['(OS=="linux" or OS=="freebsd" or OS=="win") and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
           # This directory needs to be on the include path for multiple sub-targets of webcore.
           'direct_dependent_settings': {
             'include_dirs': [
@@ -1316,7 +1321,7 @@
             ],
           },
         }],
-        ['(OS=="mac" or OS=="linux" or OS=="win") and "WTF_USE_WEBAUDIO_FFMPEG=1" in feature_defines', {
+        ['(OS=="mac" or OS=="linux" or OS=="freebsd" or OS=="win") and "WTF_USE_WEBAUDIO_FFMPEG=1" in feature_defines', {
           # This directory needs to be on the include path for multiple sub-targets of webcore.
           'direct_dependent_settings': {
             'include_dirs': [
@@ -1940,7 +1945,7 @@
             'include_dirs+++': ['../dom'],
           },
         }],
-        ['OS=="linux" and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
+        ['OS=="linux" or OS=="freebsd" and "WTF_USE_WEBAUDIO_FFTW=1" in feature_defines', {
           # FIXME: (kbr) figure out how to make these dependencies
           # work in a cross-platform way. Attempts to use
           # "link_settings" and "libraries" in conjunction with the
