--- chrome/chrome_browser_ui.gypi.orig	2016-05-11 15:02:17.000000000 -0400
+++ chrome/chrome_browser_ui.gypi	2016-05-21 10:36:31.058956000 -0400
@@ -3069,7 +3069,7 @@
             }],
           ],
         }],
-        ['use_aura==1 and chromeos==0 and use_ozone==0 and OS=="linux"', {
+        ['use_aura==1 and chromeos==0 and use_ozone==0 and (OS=="linux" or OS=="freebsd" or OS=="openbsd")', {
           'dependencies': [
             # gtk2 is the only component that can interact with gtk2 in our new
             # world.
@@ -3251,7 +3251,7 @@
           ],
           'sources': [ '<@(chrome_browser_ui_desktop_linux_sources)' ],
         }],
-        ['OS=="linux"', {  # Both desktop Linux and ChromeOS.
+        ['OS=="linux" or OS=="freebsd" or OS=="openbsd"', {  # Both desktop Linux and ChromeOS.
           'sources': [ '<@(chrome_browser_ui_linux_sources)' ],
           'conditions': [
             ['use_aura==1', {
