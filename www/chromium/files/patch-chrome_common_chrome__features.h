--- chrome/common/chrome_features.h.orig	2019-09-09 21:55:11 UTC
+++ chrome/common/chrome_features.h
@@ -61,10 +61,10 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kAutoFetchOnNetErrorPage;
 #endif
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kBackgroundModeAllowRestart;
-#endif  // defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kBlockPromptsIfDismissedOften;
@@ -83,7 +83,7 @@ extern const base::Feature kBundledConnectionHelpFeatu
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kCaptionSettings;
 
-#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX) || defined(OS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kCertDualVerificationTrialFeature;
 #endif
@@ -129,7 +129,7 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kUploadZippedSystemLogs;
 #endif
 
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES) extern const base::Feature kTerminalSystemApp;
 #endif
 
