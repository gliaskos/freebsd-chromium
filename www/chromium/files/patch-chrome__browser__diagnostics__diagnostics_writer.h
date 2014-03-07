--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-03-04 03:17:14.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-03-07 14:10:32.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
