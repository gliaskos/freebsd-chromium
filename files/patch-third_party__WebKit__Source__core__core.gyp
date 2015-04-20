--- third_party/WebKit/Source/core/core.gyp.orig	2014-10-10 09:34:37 UTC
+++ third_party/WebKit/Source/core/core.gyp
@@ -505,13 +505,13 @@
           # Due to a bug in gcc 4.6 in android NDK, we get warnings about uninitialized variable.
           'cflags': ['-Wno-uninitialized'],
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources!': [
             'layout/LayoutThemeLinux.cpp',
             'layout/LayoutThemeLinux.h',
           ],
         }],
-        ['OS != "linux" and OS != "android"', {
+        ['OS != "linux" and OS != "android" and os_bsd != 1', {
           'sources!': [
             'layout/LayoutThemeFontProviderLinux.cpp',
           ],
@@ -812,13 +812,13 @@
               # Due to a bug in gcc 4.6 in android NDK, we get warnings about uninitialized variable.
               'cflags': ['-Wno-uninitialized'],
             }],
-            ['OS != "linux"', {
+            ['OS != "linux" and os_bsd != 1', {
               'sources!': [
                 'layout/LayoutThemeChromiumLinux.cpp',
                 'layout/LayoutThemeChromiumLinux.h',
               ],
             }],
-            ['OS != "linux" and OS != "android"', {
+            ['OS != "linux" and OS != "android" and os_bsd != 1', {
               'sources!': [
                 'layout/LayoutThemeChromiumFontProviderLinux.cpp',
               ],
