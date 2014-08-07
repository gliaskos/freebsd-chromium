--- ./native_client/src/shared/platform/platform.gyp.orig	2014-07-15 21:03:15.000000000 +0200
+++ ./native_client/src/shared/platform/platform.gyp	2014-07-20 18:13:09.000000000 +0200
@@ -36,7 +36,7 @@
       'refcount_base.cc',
     ],
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'platform_sources': [
           'linux/nacl_clock.c',
           'linux/nacl_host_dir.c',
