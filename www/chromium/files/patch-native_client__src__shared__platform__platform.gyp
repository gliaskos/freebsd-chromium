--- ./native_client/src/shared/platform/platform.gyp.orig	2014-03-12 20:23:22.000000000 +0100
+++ ./native_client/src/shared/platform/platform.gyp	2014-03-14 09:23:25.000000000 +0100
@@ -36,7 +36,7 @@
       'refcount_base.cc',
     ],
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'platform_sources': [
           'linux/nacl_clock.c',
           'linux/nacl_host_dir.c',
