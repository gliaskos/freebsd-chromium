--- ./remoting/remoting.gyp.orig	2014-02-20 21:28:03.000000000 +0100
+++ ./remoting/remoting.gyp	2014-02-24 17:23:45.000000000 +0100
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
