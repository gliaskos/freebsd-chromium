--- ./printing/printing.gyp.orig	2014-03-26 21:14:08.000000000 +0100
+++ ./printing/printing.gyp	2014-03-28 10:57:59.000000000 +0100
@@ -215,7 +215,7 @@
             'backend/print_backend_chromeos.cc',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or OS=="freebsd"', { #XXX (rene) temp!
           'sources': [
             'printing_context_linux.cc',
             'printing_context_linux.h',
