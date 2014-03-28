--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-03-26 21:15:51.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-03-28 10:57:59.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
