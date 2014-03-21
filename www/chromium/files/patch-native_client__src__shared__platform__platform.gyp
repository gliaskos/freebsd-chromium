--- ./native_client/src/shared/platform/platform.gyp.orig	2014-03-19 20:03:37.000000000 +0100
+++ ./native_client/src/shared/platform/platform.gyp	2014-03-21 00:27:13.000000000 +0100
@@ -36,7 +36,7 @@
       'refcount_base.cc',
     ],
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'platform_sources': [
           'linux/nacl_clock.c',
           'linux/nacl_host_dir.c',
