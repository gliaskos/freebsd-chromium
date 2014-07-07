--- ./printing/printing.gyp.orig	2014-06-30 21:03:04.000000000 +0200
+++ ./printing/printing.gyp	2014-07-01 22:46:25.000000000 +0200
@@ -193,7 +193,7 @@
             'backend/print_backend_chromeos.cc',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or OS=="freebsd"', { #XXX (rene) temp!
           'sources': [
             'printing_context_linux.cc',
             'printing_context_linux.h',
