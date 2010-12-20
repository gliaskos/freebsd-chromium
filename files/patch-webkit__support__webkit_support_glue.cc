--- ./webkit/support/webkit_support_glue.cc.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/support/webkit_support_glue.cc	2010-12-20 20:41:38.000000000 +0100
@@ -99,7 +99,7 @@
 void UserMetricsRecordAction(const std::string& action) {
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 int MatchFontWithFallback(const std::string& face, bool bold,
                           bool italic, int charset) {
   return -1;
