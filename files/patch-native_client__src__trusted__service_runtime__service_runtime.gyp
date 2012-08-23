--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2012-08-17 03:03:16.000000000 +0200
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2012-08-23 22:31:44.000000000 +0200
@@ -6,7 +6,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'linux/nacl_syscall_impl.c'
         ],
