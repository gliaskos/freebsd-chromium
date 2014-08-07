--- ./chrome/chrome_browser_extensions.gypi.orig	2014-07-15 21:02:11.000000000 +0200
+++ ./chrome/chrome_browser_extensions.gypi	2014-07-20 18:13:08.000000000 +0200
@@ -921,6 +921,11 @@
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
