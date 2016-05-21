--- third_party/WebKit/Source/core/core.gyp.orig	2016-05-11 15:02:30.000000000 -0400
+++ third_party/WebKit/Source/core/core.gyp	2016-05-20 11:26:56.526159000 -0400
@@ -367,7 +367,7 @@
             'layout/LayoutThemeMac.mm',
           ],
         }],
-        ['OS != "linux"', {
+        ['OS != "linux" and os_bsd != 1', {
           'sources!': [
             'layout/LayoutThemeLinux.cpp',
             'layout/LayoutThemeLinux.h',
@@ -644,7 +644,7 @@
                 'layout/LayoutThemeMac.mm',
               ],
             }],
-            ['OS != "linux"', {
+            ['OS != "linux" and OS != "openbsd" and OS != "freebsd"', {
               'sources!': [
                 'layout/LayoutThemeLinux.cpp',
                 'layout/LayoutThemeLinux.h',
