--- ./chrome/test/startup/feature_startup_test.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/test/startup/feature_startup_test.cc	2010-12-20 20:41:37.000000000 +0100
@@ -192,7 +192,7 @@
   RunNewTabTimingTest();
 }
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
 TEST_F(NewTabUIStartupTest, GtkThemeCold) {
   RunStartupTest("tab_gtk_theme_cold", false /* cold */,
                  false /* not important */,
