--- ./chrome/chrome_browser.gypi.orig	2010-12-13 12:04:58.000000000 +0100
+++ ./chrome/chrome_browser.gypi	2011-01-07 14:17:11.000000000 +0100
@@ -3494,7 +3494,7 @@
             ['exclude', '^browser/views/tab_contents/tab_contents_view_gtk.h'],
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:dbus-glib',
             '../build/linux/system.gyp:gconf',
@@ -3507,12 +3507,13 @@
           'link_settings': {
             'libraries': [
               # For dlsym() in 'browser/zygote_main_linux.cc'
-              '-ldl',
+              '-lc',
             ],
           },
           'sources!': [
             'browser/ui/views/extensions/extension_view.cc',
             'browser/ui/views/extensions/extension_view.h',
+            'browser/file_path_watcher_inotify.cc',
           ],
           'sources': [
             'browser/crash_handler_host_linux.h',
@@ -3567,7 +3568,6 @@
             'browser/certificate_manager_model.h',
             'browser/dom_ui/options/certificate_manager_handler.cc',
             'browser/dom_ui/options/certificate_manager_handler.h',
-            'browser/file_path_watcher_inotify.cc',
           ],
         }],
         ['OS=="freebsd" or OS=="openbsd"', {
@@ -3579,6 +3579,17 @@
           ],
           'sources': [
             'browser/file_path_watcher_stub.cc',
+             #'browser/geolocation/gateway_data_provider_bsd.cc',
+             #'browser/geolocation/gateway_data_provider_bsd.h',
+          ],
+          'sources!': [
+            #'browser/geolocation/empty_device_data_provider.cc',
+            #'browser/geolocation/empty_device_data_provider.h',
+             'browser/geolocation/gateway_data_provider_linux.cc',
+             'browser/geolocation/gateway_data_provider_linux.h',
+             'browser/geolocation/wifi_data_provider_linux.h',
+             'browser/geolocation/wifi_data_provider_linux.cc',
+            'browser/file_path_watcher_inotify.cc',
           ],
         }],
         # Use system SSL settings on Mac and Windows.  Use preferences
@@ -4159,7 +4170,7 @@
               ],
             }],
             # GTK build only
-            ['OS=="linux" and toolkit_views==0', {
+            ['(OS=="linux" or OS=="freebsd") and toolkit_views==0', {
               'sources/': [
                 ['include', '^browser/printing/print_dialog_gtk.cc'],
                 ['include', '^browser/printing/print_dialog_gtk.h'],
