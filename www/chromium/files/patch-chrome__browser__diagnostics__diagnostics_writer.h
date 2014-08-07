--- ./chrome/browser/diagnostics/diagnostics_writer.h.orig	2014-07-15 21:01:23.000000000 +0200
+++ ./chrome/browser/diagnostics/diagnostics_writer.h	2014-07-20 18:13:07.000000000 +0200
@@ -18,7 +18,7 @@
  public:
   // The type of formatting done by this writer.
   enum FormatType {
-    MACHINE,
+    THEMACHINE,
     LOG,
     HUMAN
   };
