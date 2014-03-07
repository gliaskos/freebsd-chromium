--- ./chrome/common/pref_names.cc.orig	2014-03-04 03:16:39.000000000 +0100
+++ ./chrome/common/pref_names.cc	2014-03-07 14:10:32.000000000 +0100
@@ -921,7 +921,7 @@
 // Boolean controlling whether SafeSearch is mandatory for Google Web Searches.
 const char kForceSafeSearch[] = "settings.force_safesearch";
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 // Linux specific preference on whether we should match the system theme.
 const char kUsesSystemTheme[] = "extensions.theme.use_system";
 #endif
