--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-03-19 20:02:52.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-03-21 00:27:12.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
