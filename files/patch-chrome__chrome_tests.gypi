--- ./chrome/chrome_tests.gypi.orig	2012-08-17 03:02:27.000000000 +0200
+++ ./chrome/chrome_tests.gypi	2012-08-23 22:31:43.000000000 +0200
@@ -4592,7 +4592,7 @@
                 '../courgette/courgette.gyp:courgette_unittests',
                 'browser_tests',
                 ]}],
-            ['OS=="linux"', {
+            ['OS=="linux" or OS=="freebsd"', {
               'dependencies': [
                 # Win bot needs to be turned into an interactive bot.
                 'interactive_ui_tests',
