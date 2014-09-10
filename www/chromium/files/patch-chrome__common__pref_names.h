--- chrome/common/pref_names.h.orig	2014-09-04 00:29:10 UTC
+++ chrome/common/pref_names.h
@@ -291,7 +291,7 @@
 extern const char kForceSafeSearch[];
 extern const char kDeleteTimePeriod[];
 extern const char kLastClearBrowsingDataTime[];
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const char kUsesSystemTheme[];
 #endif
 extern const char kCurrentThemePackFilename[];
