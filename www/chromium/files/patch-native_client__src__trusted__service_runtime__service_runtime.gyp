--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2014-04-02 21:05:14.000000000 +0200
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2014-04-04 01:39:18.000000000 +0200
@@ -6,7 +6,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'posix/nacl_syscall_impl.c'
         ],
