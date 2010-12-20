--- ./chrome/test/testing_profile.cc.orig	2010-12-13 12:04:45.000000000 +0100
+++ ./chrome/test/testing_profile.cc	2010-12-20 20:41:37.000000000 +0100
@@ -47,7 +47,7 @@
 #include "testing/gmock/include/gmock/gmock.h"
 #include "webkit/database/database_tracker.h"
 
-#if defined(OS_LINUX) && !defined(TOOLKIT_VIEWS)
+#if defined(TOOLKIT_GTK) && !defined(TOOLKIT_VIEWS)
 #include "chrome/browser/gtk/gtk_theme_provider.h"
 #endif
 
@@ -384,7 +384,7 @@
 
 void TestingProfile::InitThemes() {
   if (!created_theme_provider_) {
-#if defined(OS_LINUX) && !defined(TOOLKIT_VIEWS)
+#if defined(TOOLKIT_GTK) && !defined(TOOLKIT_VIEWS)
     theme_provider_.reset(new GtkThemeProvider);
 #else
     theme_provider_.reset(new BrowserThemeProvider);
