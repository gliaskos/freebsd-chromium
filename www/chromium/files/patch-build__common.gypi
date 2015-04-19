--- build/common.gypi.orig	2014-10-10 09:15:29 UTC
+++ build/common.gypi
@@ -94,7 +94,7 @@
 
           'conditions': [
             # ChromeOS and Windows use Aura and Ash.
-            ['chromeos==1 or OS=="win" or OS=="linux"', {
+            ['chromeos==1 or OS=="win" or OS=="linux" or OS=="freebsd"', {
               'use_ash%': 1,
               'use_aura%': 1,
             }],
@@ -691,7 +691,7 @@
         }],
 
         # DBus usage.
-        ['OS=="linux" and embedded==0', {
+        ['(OS=="linux" or OS=="freebsd") and embedded==0', {
           'use_dbus%': 1,
         }, {
           'use_dbus%': 0,
@@ -941,7 +941,7 @@
         }, {
           'use_openmax_dl_fft%': 0,
         }],
-        ['OS=="win" or OS=="linux"', {
+        ['OS=="win" or OS=="linux" or OS=="freebsd"', {
             'enable_mdns%' : 1,
         }],
 
@@ -1215,6 +1215,10 @@
     # able to turn it off for various reasons.
     'linux_disable_pie%': 0,
 
+    # XXX(rene) More options, keep them?
+    'os_ver%': 0,
+    'use_system_libjpeg%': 0,    
+
     # The release channel that this build targets. This is used to restrict
     # channel-specific build options, like which installer packages to create.
     # The default is 'all', which does no channel-specific filtering.
@@ -4465,6 +4469,13 @@
         'ldflags': [
           '-Wl,--no-keep-memory',
         ],
+        'ldflags!': [
+          '-ldl',
+          '-pie',
+        ],
+        'libraries!': [
+          '-ldl',
+        ],
       },
     }],
     # Android-specific options; note that most are set above with Linux.
