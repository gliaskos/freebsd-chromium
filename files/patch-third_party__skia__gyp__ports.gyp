--- third_party/skia/gyp/ports.gyp.orig	Tue Mar 10 23:43:02 2015
+++ third_party/skia/gyp/ports.gyp	Wed Mar 11 07:22:50 2015
@@ -73,11 +73,6 @@
         [ 'skia_os in ["linux", "freebsd", "openbsd", "solaris", "chromeos"]', {
           'conditions': [
             [ 'skia_no_fontconfig', {
-              'link_settings': {
-                'libraries': [
-                  '-ldl',
-                ],
-              },
               'sources': [
                 '../src/ports/SkFontHost_linux.cpp',
               ],
@@ -85,7 +80,6 @@
               'link_settings': {
                 'libraries': [
                   '-lfontconfig',
-                  '-ldl',
                 ],
               },
               'sources': [
