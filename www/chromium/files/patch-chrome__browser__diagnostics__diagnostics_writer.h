--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-02-20 21:27:37.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-02-24 17:23:44.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
