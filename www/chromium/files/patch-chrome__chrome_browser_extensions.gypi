--- ./chrome/chrome_browser_extensions.gypi.orig	2014-03-19 20:02:53.000000000 +0100
+++ ./chrome/chrome_browser_extensions.gypi	2014-03-21 00:27:12.000000000 +0100
@@ -922,6 +922,11 @@
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
