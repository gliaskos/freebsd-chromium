--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2014-03-19 20:03:35.000000000 +0100
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2014-03-21 00:27:13.000000000 +0100
@@ -6,7 +6,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'posix/nacl_syscall_impl.c'
         ],
