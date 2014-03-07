--- ./chrome/browser/diagnostics/diagnostics_writer.cc.orig	2014-03-05 22:24:37.000000000 +0100
+++ ./chrome/browser/diagnostics/diagnostics_writer.cc	2014-03-07 23:57:25.000000000 +0100
@@ -268,7 +268,7 @@
       console_->SetColor(color);
       console_->Write(base::ASCIIToUTF16(result));
     }
-    if (format_ == MACHINE) {
+    if (format_ == THEMACHINE) {
       return WriteInfoLine(base::StringPrintf(
           "%03d %s (%s)", outcome_code, id.c_str(), extra.c_str()));
     } else {
