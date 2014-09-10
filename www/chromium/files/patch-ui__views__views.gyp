--- ui/views/views.gyp.orig	2014-09-04 00:29:11 UTC
+++ ui/views/views.gyp
@@ -605,7 +605,7 @@
             '../display/display.gyp:display_util',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" or os_bsd==1) and chromeos==0', {
           'dependencies': [
             '../shell_dialogs/shell_dialogs.gyp:shell_dialogs',
           ],
