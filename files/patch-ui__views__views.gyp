--- ui/views/views.gyp.orig	2014-10-10 08:54:19 UTC
+++ ui/views/views.gyp
@@ -631,7 +631,7 @@
             '../display/display.gyp:display_util',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" or os_bsd==1) and chromeos==0', {
           'dependencies': [
             '../shell_dialogs/shell_dialogs.gyp:shell_dialogs',
           ],
@@ -696,7 +696,7 @@
         ['use_aura and chromeos == 0', {
           'sources': [ '<@(views_desktop_aura_sources)' ],
           'conditions': [
-            ['OS == "linux"', {
+            ['OS == "linux" or os_bsd==1', {
               'sources': [ '<@(views_desktop_aura_linux_sources)' ],
             }],
             ['use_x11 == 1', {
