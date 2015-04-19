--- ui/views/views.gyp.orig	2014-10-10 08:54:19 UTC
+++ ui/views/views.gyp
@@ -625,7 +625,7 @@
             '../display/display.gyp:display_util',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" or os_bsd==1) and chromeos==0', {
           'dependencies': [
             '../shell_dialogs/shell_dialogs.gyp:shell_dialogs',
           ],
