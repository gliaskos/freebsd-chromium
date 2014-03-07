--- ./remoting/remoting.gyp.orig	2014-03-04 03:17:28.000000000 +0100
+++ ./remoting/remoting.gyp	2014-03-07 14:10:34.000000000 +0100
@@ -50,7 +50,7 @@
 
     'conditions': [
       # Remoting host is supported only on Windows, OSX and Linux (with X11).
-      ['OS=="win" or OS=="mac" or (OS=="linux" and chromeos==0 and use_x11==1)', {
+      ['OS=="win" or OS=="mac" or OS=="freebsd" or (OS=="linux" and chromeos==0 and use_x11==1)', {
         'enable_remoting_host': 1,
       }, {
         'enable_remoting_host': 0,
@@ -468,7 +468,7 @@
             'host/win/wts_terminal_observer.h',
           ],
           'conditions': [
-            ['OS=="linux"', {
+            ['OS=="linux" or os_bsd==1', {
               'dependencies': [
                 # Always use GTK on Linux, even for Aura builds.
                 #
