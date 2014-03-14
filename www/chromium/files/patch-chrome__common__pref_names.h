--- ./chrome/common/pref_names.h.orig	2014-03-12 20:22:10.000000000 +0100
+++ ./chrome/common/pref_names.h	2014-03-14 09:23:25.000000000 +0100
@@ -306,7 +306,7 @@
 extern const char kForceSafeSearch[];
 extern const char kDeleteTimePeriod[];
 extern const char kLastClearBrowsingDataTime[];
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const char kUsesSystemTheme[];
 #endif
 extern const char kCurrentThemePackFilename[];
