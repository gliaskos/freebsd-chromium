--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-03-05 22:24:37.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-03-07 23:57:25.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
