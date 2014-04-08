--- ./chrome/browser/diagnostics/diagnostics_writer.cc.orig	2014-04-02 21:04:20.000000000 +0200
+++ ./chrome/browser/diagnostics/diagnostics_writer.cc	2014-04-04 01:39:18.000000000 +0200
@@ -268,7 +268,7 @@
       console_->SetColor(color);
       console_->Write(base::ASCIIToUTF16(result));
     }
-    if (format_ == MACHINE) {
+    if (format_ == THEMACHINE) {
       return WriteInfoLine(base::StringPrintf(
           "%03d %s (%s)", outcome_code, id.c_str(), extra.c_str()));
     } else {
