--- build/common.gypi.orig	2011-08-30 11:58:48.000000000 +0300
+++ build/common.gypi	2011-09-11 18:29:22.000000000 +0300
@@ -303,6 +303,9 @@
     'enable_register_protocol_handler%': '<(enable_register_protocol_handler)',
     'enable_smooth_scrolling%': '<(enable_smooth_scrolling)',
 
+    'os_ver%': 0,
+    'prefix_dir%': '/usr',
+
     # The release channel that this build targets. This is used to restrict
     # channel-specific build options, like which installer packages to create.
     # The default is 'all', which does no channel-specific filtering.
@@ -516,7 +519,7 @@
         # This is used to tweak build flags for gcc 4.4.
         'gcc_version%': '<!(python <(DEPTH)/build/compiler_version.py)',
         # Figure out the python architecture to decide if we build pyauto.
-        'python_arch%': '<!(<(DEPTH)/build/linux/python_arch.sh <(sysroot)/usr/lib/libpython<(python_ver).so.1.0)',
+        'python_arch%': '<!(<(DEPTH)/build/linux/python_arch.sh <(sysroot)<(prefix_dir)/lib/libpython<(python_ver).so.1)',
         'conditions': [
           ['branding=="Chrome"', {
             'linux_breakpad%': 1,
@@ -956,7 +959,7 @@
               ['exclude', '(^|/)(gtk|x11)_[^/]*\\.(h|cc)$'],
             ],
           }],
-          ['OS!="linux"', {
+          ['OS!="linux" and OS!="freebsd"', {
             'sources/': [
               ['exclude', '_linux(_unittest)?\\.(h|cc)$'],
               ['exclude', '(^|/)linux/'],
@@ -1536,6 +1539,12 @@
         'ldflags': [
           '-Wl,--no-keep-memory',
         ],
+        'ldflags!': [
+          '-ldl',
+        ],
+        'libraries!': [
+          '-ldl',
+        ],
       },
     }],
     ['OS=="solaris"', {
