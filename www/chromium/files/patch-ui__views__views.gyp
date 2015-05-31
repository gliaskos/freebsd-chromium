--- ui/views/views.gyp.orig	2015-04-15 00:31:23.000000000 +0200
+++ ui/views/views.gyp	2015-04-20 21:31:06.000000000 +0200
@@ -635,12 +635,12 @@
             '../display/display.gyp:display_util',
           ],
         }],
-        ['OS=="linux" and chromeos==0 and use_ozone==0', {
+        ['(OS=="linux" or os_bsd==1) and chromeos==0 and use_ozone==0', {
           'dependencies': [
             '../../build/linux/system.gyp:atk',
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
+            ['OS == "linux" or os_bsd == 1', {
               'sources': [ '<@(views_desktop_aura_linux_sources)' ],
             }],
             ['use_x11 == 1', {
