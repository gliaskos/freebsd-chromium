--- chrome/chrome_browser_extensions.gypi.orig	2014-09-04 00:29:10 UTC
+++ chrome/chrome_browser_extensions.gypi
@@ -1023,6 +1023,11 @@
         '<@(chrome_browser_extensions_enabled_sources)',
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
