--- ./printing/printing.gyp.orig	2014-04-02 21:03:15.000000000 +0200
+++ ./printing/printing.gyp	2014-04-04 01:39:18.000000000 +0200
@@ -215,7 +215,7 @@
             'backend/print_backend_chromeos.cc',
           ],
         }],
-        ['OS=="linux" and chromeos==0', {
+        ['(OS=="linux" and chromeos==0) or OS=="freebsd"', { #XXX (rene) temp!
           'sources': [
             'printing_context_linux.cc',
             'printing_context_linux.h',
