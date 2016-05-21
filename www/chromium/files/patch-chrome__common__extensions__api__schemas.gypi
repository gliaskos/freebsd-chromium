--- chrome/common/extensions/api/schemas.gypi.orig	2016-05-21 12:05:09.998195000 -0400
+++ chrome/common/extensions/api/schemas.gypi	2016-05-21 12:05:25.499530000 -0400
@@ -177,7 +177,7 @@
         ],
       }, { # chromeos==0
         'conditions': [
-          ['OS=="linux" or OS=="win"', {
+          ['OS=="linux" or OS=="win" or os_bsd==1', {
             'schema_files': [
               '<@(input_ime_schema_file)',
             ],
