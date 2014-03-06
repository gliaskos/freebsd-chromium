--- ./chrome/chrome_browser_extensions.gypi.orig	2014-02-20 21:27:54.000000000 +0100
+++ ./chrome/chrome_browser_extensions.gypi	2014-02-24 17:23:44.000000000 +0100
@@ -908,6 +908,11 @@
         'browser/extensions/window_controller_list_observer.h',
       ],
       'conditions': [
+        ['os_bsd==1', {
+         'sources/': [
+            ['exclude', '^browser/extensions/api/image_writer_private/removable_storage_provider_linux.cc'],
+         ],
+        }],
         ['chromeos==1', {
           'dependencies': [
             '../build/linux/system.gyp:dbus',
