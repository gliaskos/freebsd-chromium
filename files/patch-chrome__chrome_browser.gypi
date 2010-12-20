--- ./chrome/chrome_browser.gypi.orig	2010-12-13 12:04:58.000000000 +0100
+++ ./chrome/chrome_browser.gypi	2010-12-20 20:41:38.000000000 +0100
@@ -3494,7 +3494,7 @@
             ['exclude', '^browser/views/tab_contents/tab_contents_view_gtk.h'],
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:dbus-glib',
             '../build/linux/system.gyp:gconf',
@@ -4159,7 +4159,7 @@
               ],
             }],
             # GTK build only
-            ['OS=="linux" and toolkit_views==0', {
+            ['(OS=="linux" or OS=="freebsd") and toolkit_views==0', {
               'sources/': [
                 ['include', '^browser/printing/print_dialog_gtk.cc'],
                 ['include', '^browser/printing/print_dialog_gtk.h'],
