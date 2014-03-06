--- ./native_client/src/trusted/debug_stub/debug_stub.gyp.orig	2014-02-20 21:28:53.000000000 +0100
+++ ./native_client/src/trusted/debug_stub/debug_stub.gyp	2014-02-24 17:23:45.000000000 +0100
@@ -27,7 +27,7 @@
       'test.cc',
     ],
     'conditions': [
-      ['OS=="linux" or OS=="mac"', {
+      ['OS=="linux" or OS=="freebsd" or OS=="mac"', {
         'platform_sources': [
           'posix/debug_stub_posix.cc',
           'posix/platform_impl.cc',
@@ -49,7 +49,7 @@
       'target_base': 'none',
     },
     'target_conditions': [
-      ['OS=="linux" or OS=="mac"', {
+      ['OS=="linux" or OS=="freebsd" or OS=="mac"', {
         'cflags': [
           '-fexceptions',
         ],
