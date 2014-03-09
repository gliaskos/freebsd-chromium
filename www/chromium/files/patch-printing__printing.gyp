--- ./printing/printing.gyp.orig	2014-03-05 22:23:47.000000000 +0100
+++ ./printing/printing.gyp	2014-03-09 18:03:25.000000000 +0100
@@ -215,7 +215,7 @@
             'backend/print_backend_chromeos.cc',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or OS=="freebsd"', { #XXX (rene) temp!
           'sources': [
             'printing_context_linux.cc',
             'printing_context_linux.h',
