--- ./chrome/common/child_process_logging.h.orig	2012-08-17 03:02:26.000000000 +0200
+++ ./chrome/common/child_process_logging.h	2012-08-23 22:31:43.000000000 +0200
@@ -108,7 +108,7 @@
 // Initialize the list of experiment info to send along with crash reports.
 void SetExperimentList(const std::vector<string16>& state);
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
 // Sets the product channel data to send along with crash reports to |channel|.
 void SetChannel(const std::string& channel);
 #endif
