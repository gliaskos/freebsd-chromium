--- chrome/chrome_browser_extensions.gypi.orig	2013-11-08 07:41:28.000000000 +0100
+++ chrome/chrome_browser_extensions.gypi	2013-11-16 00:00:06.000000000 +0100
@@ -854,6 +854,11 @@
         'browser/extensions/window_controller_list_observer.h',
       ],
       'conditions': [
+        ['OS=="bsd"', {
+         'sources/': [
+            ['exclude', 'browser/extensions/api/image_writer_private/removable_storage_provider_linux.cc'],
+         ],
+        }],
         ['chromeos==1', {
           'dependencies': [
             '../build/linux/system.gyp:dbus',
