--- ./native_client/src/trusted/service_runtime/service_runtime.gyp.orig	2010-12-13 12:07:04.000000000 +0100
+++ ./native_client/src/trusted/service_runtime/service_runtime.gyp	2010-12-20 20:41:37.000000000 +0100
@@ -31,7 +31,7 @@
 {
   'variables': {
     'conditions': [
-      ['OS=="linux"', {
+      ['OS=="linux" or OS=="freebsd"', {
         'syscall_handler': [
           'linux/nacl_syscall_impl.c'
         ],
