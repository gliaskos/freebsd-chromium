--- ./chrome/common/pref_names.h.orig	2014-03-04 03:16:39.000000000 +0100
+++ ./chrome/common/pref_names.h	2014-03-07 14:10:32.000000000 +0100
@@ -297,7 +297,7 @@
 extern const char kForceSafeSearch[];
 extern const char kDeleteTimePeriod[];
 extern const char kLastClearBrowsingDataTime[];
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const char kUsesSystemTheme[];
 #endif
 extern const char kCurrentThemePackFilename[];
