--- ./chrome/browser/diagnostics/diagnostics_writer.cc.orig	2014-03-04 03:17:14.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.cc	2014-03-07 14:10:32.000000000 +0100
@@ -268,7 +268,7 @@
       console_->SetColor(color);
       console_->Write(ASCIIToUTF16(result));
     }
-    if (format_ == MACHINE) {
+    if (format_ == THEMACHINE) {
       return WriteInfoLine(base::StringPrintf(
           "%03d %s (%s)", outcome_code, id.c_str(), extra.c_str()));
     } else {
