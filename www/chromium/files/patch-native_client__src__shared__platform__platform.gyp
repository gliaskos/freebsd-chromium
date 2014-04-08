--- ./native_client/src/shared/platform/platform.gyp.orig	2014-04-02 21:05:14.000000000 +0200
+++ ./native_client/src/shared/platform/platform.gyp	2014-04-04 01:39:18.000000000 +0200
@@ -36,7 +36,7 @@
       'refcount_base.cc',
     ],
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'platform_sources': [
           'linux/nacl_clock.c',
           'linux/nacl_host_dir.c',
