--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-06-30 21:02:18.000000000 +0200
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-07-07 15:12:46.000000000 +0200
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
