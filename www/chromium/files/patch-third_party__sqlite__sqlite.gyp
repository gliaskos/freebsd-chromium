--- ./third_party/sqlite/sqlite.gyp.orig	2014-07-15 21:03:11.000000000 +0200
+++ ./third_party/sqlite/sqlite.gyp	2014-07-29 12:10:46.000000000 +0200
@@ -105,6 +105,8 @@
             'amalgamation',
             # Needed for fts2 to build.
             'src/src',
+            # FreeBSD ...
+            '<(prefix_dir)/include',
           ],
           'dependencies': [
             '../icu/icu.gyp:icui18n',
