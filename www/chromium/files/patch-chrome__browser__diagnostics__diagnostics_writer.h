--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-03-12 20:21:49.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-03-14 09:23:25.000000000 +0100
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
