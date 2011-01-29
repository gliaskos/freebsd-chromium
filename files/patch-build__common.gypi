--- ./build/common.gypi.orig	2010-12-13 12:04:11.000000000 +0100
+++ ./build/common.gypi	2011-01-07 14:17:11.000000000 +0100
@@ -15,7 +15,7 @@
 
     'internal_pdf%': 0,
 
-    # This allows to use libcros from the current system, ie. /usr/lib/
+    # This allows to use libcros from the current system, ie. /usr/local/lib/
     # The cros_api will be pulled in as a static library, and all headers
     # from the system include dirs.
     'system_libcros%': '0',
@@ -227,7 +227,7 @@
 
     # Whether proprietary audio/video codecs are assumed to be included with
     # this build (only meaningful if branding!=Chrome).
-    'proprietary_codecs%': 0,
+    'proprietary_codecs%': 1,
 
     # TODO(bradnelson): eliminate this when possible.
     # To allow local gyp files to prevent release.vsprops from being included.
@@ -276,8 +276,8 @@
     # Disable TCMalloc's debugallocation.
     'linux_use_debugallocation%': 0,
 
-    # Disable TCMalloc's heapchecker.
-    'linux_use_heapchecker%': 0,
+    # Enable TCMalloc's heapchecker.
+    'linux_use_heapchecker%': 1,
 
     # Disable shadow stack keeping used by heapcheck to unwind the stacks
     # better.
@@ -295,7 +295,7 @@
 
     # Used to disable Native Client at compile time, for platforms where it
     # isn't supported
-    'disable_nacl%': 0,
+    'disable_nacl%': 1,
 
     # Set Thumb compilation flags.
     'arm_thumb%': 0,
@@ -326,7 +326,7 @@
         # This is used to tweak build flags for gcc 4.4.
         'gcc_version%': '<!(python <(DEPTH)/build/compiler_version.py)',
         # Figure out the python architecture to decide if we build pyauto.
-        'python_arch%': '<!(<(DEPTH)/build/linux/python_arch.sh <(sysroot)/usr/lib/libpython<(python_ver).so.1.0)',
+        'python_arch%': '<!(<(DEPTH)/build/linux/python_arch.sh <(sysroot)/usr/local/lib/libpython<(python_ver).so.1)',
         'conditions': [
           ['branding=="Chrome"', {
             'linux_breakpad%': 1,
@@ -631,7 +631,7 @@
               ['exclude', '(^|/)(gtk|x11)_[^/]*\\.(h|cc)$'],
             ],
           }],
-          ['OS!="linux"', {
+          ['OS!="linux" and OS!="freebsd"', {
             'sources/': [
               ['exclude', '_linux(_unittest)?\\.(h|cc)$'],
               ['exclude', '(^|/)linux/'],
