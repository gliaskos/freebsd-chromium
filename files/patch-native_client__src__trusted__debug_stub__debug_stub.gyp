--- ./native_client/src/trusted/debug_stub/debug_stub.gyp.orig	2012-08-17 03:02:47.000000000 +0200
+++ ./native_client/src/trusted/debug_stub/debug_stub.gyp	2012-08-23 22:31:44.000000000 +0200
@@ -18,7 +18,7 @@
       'transport_common.cc',
     ],
     'conditions': [
-      ['OS=="linux" or OS=="mac"', {
+      ['OS=="linux" or OS=="freebsd" or OS=="mac"', {
         'platform_sources': [
           'posix/debug_stub_posix.cc',
           'posix/mutex_impl.cc',
@@ -42,7 +42,7 @@
       'target_base': 'none',
     },
     'target_conditions': [
-      ['OS=="linux" or OS=="mac"', {
+      ['OS=="linux" or OS=="freebsd" or OS=="mac"', {
         'cflags': [
           '-fexceptions',
         ],
