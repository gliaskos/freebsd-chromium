--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2014-03-26 21:16:28.000000000 +0100
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -6,7 +6,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'posix/nacl_syscall_impl.c'
         ],
