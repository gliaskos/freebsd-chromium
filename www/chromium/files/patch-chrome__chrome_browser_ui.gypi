--- chrome/chrome_browser_ui.gypi.orig	2015-10-14 16:42:08.849931000 +0200
+++ chrome/chrome_browser_ui.gypi	2015-10-14 16:45:35.205417000 +0200
@@ -3069,7 +3069,7 @@
             }],
           ],
         }],
-        ['use_aura==1 and chromeos==0 and use_ozone==0 and OS=="linux"', {
+        ['use_aura==1 and chromeos==0 and use_ozone==0 and (OS=="linux" or OS=="openbsd")', {
           'dependencies': [
             # gtk2 is the only component that can interact with gtk2 in our new
             # world.
@@ -3251,7 +3251,7 @@
           ],
           'sources': [ '<@(chrome_browser_ui_desktop_linux_sources)' ],
         }],
-        ['OS=="linux"', {  # Both desktop Linux and ChromeOS.
+        ['OS=="linux" or OS=="openbsd"', {  # Both desktop Linux and ChromeOS.
           'sources': [ '<@(chrome_browser_ui_linux_sources)' ],
           'conditions': [
             ['use_aura==1', {
