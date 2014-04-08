--- ./chrome/chrome_browser_extensions.gypi.orig	2014-04-02 21:04:59.000000000 +0200
+++ ./chrome/chrome_browser_extensions.gypi	2014-04-04 01:39:18.000000000 +0200
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
