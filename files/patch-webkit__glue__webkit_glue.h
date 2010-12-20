--- ./webkit/glue/webkit_glue.h.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/glue/webkit_glue.h	2010-12-20 20:41:38.000000000 +0100
@@ -272,7 +272,7 @@
 // Notifies the browser that the given action has been performed.
 void UserMetricsRecordAction(const std::string& action);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Return a read-only file descriptor to the font which best matches the given
 // properties or -1 on failure.
 //   charset: specifies the language(s) that the font must cover. See
