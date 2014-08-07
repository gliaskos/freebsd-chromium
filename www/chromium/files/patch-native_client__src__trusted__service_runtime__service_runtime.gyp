--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2014-07-15 21:03:20.000000000 +0200
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2014-07-20 18:13:09.000000000 +0200
@@ -6,7 +6,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'posix/nacl_syscall_impl.c'
         ],
