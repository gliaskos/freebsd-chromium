--- ./chrome/chrome_browser.gypi.orig	2010-12-16 02:12:13.000000000 +0100
+++ ./chrome/chrome_browser.gypi	2010-12-20 20:15:08.000000000 +0100
@@ -3574,7 +3574,7 @@
             ['exclude', '^browser/views/tab_contents/tab_contents_view_gtk.h'],
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:dbus-glib',
             '../build/linux/system.gyp:gconf',
@@ -4242,7 +4242,7 @@
               ],
             }],
             # GTK build only
-            ['OS=="linux" and toolkit_views==0', {
+            ['(OS=="linux" or OS=="freebsd") and toolkit_views==0', {
               'sources/': [
                 ['include', '^browser/printing/print_dialog_gtk.cc'],
                 ['include', '^browser/printing/print_dialog_gtk.h'],
