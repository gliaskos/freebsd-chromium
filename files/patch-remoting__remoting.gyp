--- ./remoting/remoting.gyp.orig	2010-12-16 02:11:22.000000000 +0100
+++ ./remoting/remoting.gyp	2010-12-20 20:15:08.000000000 +0100
@@ -16,7 +16,7 @@
   },
 
   'conditions': [
-    ['OS=="linux" or OS=="mac"', {
+    ['OS=="linux" or OS=="freebsd" or OS=="mac"', {
       'targets': [
         # Simple webserver for testing chromoting client plugin.
         {
@@ -221,7 +221,7 @@
             'host/event_executor_win.h',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'sources': [
             'host/capturer_linux.cc',
             'host/capturer_linux.h',
@@ -494,7 +494,7 @@
             'host/capturer_gdi_unittest.cc',
           ],
         }],
-        ['OS=="linux"', {
+        ['OS=="linux" or OS=="freebsd"', {
           'dependencies': [
             # Needed for the following #include chain:
             #   base/run_all_unittests.cc
