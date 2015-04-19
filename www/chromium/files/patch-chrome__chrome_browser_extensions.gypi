--- chrome/chrome_browser_extensions.gypi.orig	2014-10-10 09:15:30 UTC
+++ chrome/chrome_browser_extensions.gypi
@@ -971,6 +971,11 @@
         '<@(chrome_browser_extensions_enabled_sources)',
       ],
       'conditions': [
+        ['os_bsd==1', {
+         'sources/': [
+            ['exclude', '^browser/extensions/api/image_writer_private/removable_storage_provider_linux.cc'],
+         ],
+        }],
         ['chromeos==1', {
           'include_dirs': [
             '../third_party/libjingle/source',
@@ -1009,7 +1014,7 @@
         }, {
           'sources': ['<@(chrome_browser_extensions_non_athena_sources)'],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or os_bsd==1', {
           'conditions': [
             ['use_aura==1', {
               'dependencies': [
