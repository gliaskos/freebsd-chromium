--- ./native_client/src/shared/platform/platform.gyp.orig	2012-08-17 03:02:46.000000000 +0200
+++ ./native_client/src/shared/platform/platform.gyp	2012-08-23 22:31:44.000000000 +0200
@@ -36,7 +36,7 @@
       'refcount_base.cc',
     ],
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'platform_sources': [
           'linux/nacl_clock.c',
           'linux/nacl_host_dir.c',
