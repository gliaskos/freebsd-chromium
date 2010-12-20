--- ./chrome/chrome_tests.gypi.orig	2010-12-13 12:04:58.000000000 +0100
+++ ./chrome/chrome_tests.gypi	2010-12-20 20:41:37.000000000 +0100
@@ -138,7 +138,7 @@
         'test/unit/chrome_test_suite.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../build/linux/system.gyp:nss',
@@ -188,7 +188,7 @@
         'test/ui/ui_test_suite.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
@@ -212,7 +212,7 @@
         'test/unit/run_all_unittests.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             # Needed for the following #include chain:
             #   test/unit/run_all_unittests.cc
@@ -247,7 +247,7 @@
         'test/automated_ui_tests/automated_ui_tests.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
           ],
@@ -325,7 +325,7 @@
         'test/unit/chrome_test_suite.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../build/linux/system.gyp:nss',
@@ -545,12 +545,12 @@
             '../webkit/webkit.gyp:copy_npapi_pepper_test_plugin',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
           ],
-        }, { # else: OS != "linux"
+        }, { # else: OS != ("linux" or "freebsd")
           'sources!': [
             'browser/process_singleton_linux_uitest.cc',
           ],
@@ -706,7 +706,7 @@
         'test/webdriver/commands/webdriver_command.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
@@ -1693,7 +1693,7 @@
             ['exclude', '^browser/chromeos/'],
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'conditions': [
             ['gcc_version==44', {
               # Avoid gcc 4.4 strict aliasing issues in stl_tree.h when
@@ -1730,7 +1730,7 @@
           'sources!': [
             'browser/printing/print_job_unittest.cc',
           ],
-        }, { # else: OS != "linux"
+        }, { # else: OS != ("linux" or "freebsd")
           'sources!': [
             'browser/gtk/tabs/tab_renderer_gtk_unittest.cc',
             'browser/renderer_host/gtk_key_bindings_handler_unittest.cc',
@@ -2189,7 +2189,7 @@
             'browser/renderer_host/test/render_view_host_manager_browsertest.cc',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../build/linux/system.gyp:nss',
@@ -2341,7 +2341,7 @@
         'test/startup/startup_test.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
@@ -2431,7 +2431,7 @@
             },
           },
         },],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
           ],
@@ -2457,7 +2457,7 @@
         'test/page_cycler/page_cycler_test.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
@@ -2494,7 +2494,7 @@
         'test/tab_switching/tab_switching_test.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
@@ -2528,7 +2528,7 @@
         'test/memory_test/memory_test.cc',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
@@ -2681,7 +2681,7 @@
             'browser/sync/util/data_encryption_unittest.cc',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             '../build/linux/system.gyp:gtk',
             '../build/linux/system.gyp:nss',
@@ -2799,7 +2799,7 @@
       ],
       'conditions': [
         # Plugin code.
-        ['OS=="linux" or OS=="win"', {
+        ['OS=="linux" or OS=="freebsd" or OS=="win"', {
           'dependencies': [
             'plugin',
            ],
@@ -2807,7 +2807,7 @@
             'plugin',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
            'dependencies': [
              '../build/linux/system.gyp:gtk',
              '../build/linux/system.gyp:nss',
@@ -2938,7 +2938,7 @@
             'test/perf/url_parse_perftest.cc',
           ],
           'conditions': [
-            ['OS=="linux"', {
+            ['OS=="linux" or OS=="freebsd"', {
               'dependencies': [
                 '../build/linux/system.gyp:gtk',
                 '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
