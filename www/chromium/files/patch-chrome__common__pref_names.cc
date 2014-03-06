--- ./chrome/common/pref_names.cc.orig	2014-02-20 21:27:53.000000000 +0100
+++ ./chrome/common/pref_names.cc	2014-02-24 17:23:44.000000000 +0100
@@ -921,7 +921,7 @@
 // Boolean controlling whether SafeSearch is mandatory for Google Web Searches.
 const char kForceSafeSearch[] = "settings.force_safesearch";
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 // Linux specific preference on whether we should match the system theme.
 const char kUsesSystemTheme[] = "extensions.theme.use_system";
 #endif
