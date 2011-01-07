--- ./chrome/browser/dom_ui/bug_report_ui.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/dom_ui/bug_report_ui.cc	2011-01-07 14:17:10.000000000 +0100
@@ -147,7 +147,7 @@
   gfx::NativeWindow window = parent->GetNativeWindow();
   int width = parent->GetBounds().width();
   int height = parent->GetBounds().height();
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 // Linux provides its bounds and a native window handle to the screen
 void RefreshLastScreenshot(gfx::NativeWindow window,
                            const gfx::Rect& bounds) {
@@ -181,7 +181,7 @@
 
 #if defined(TOOLKIT_VIEWS)
 void ShowHtmlBugReportView(views::Window* parent, Browser* browser) {
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 void ShowHtmlBugReportView(gfx::NativeWindow window, const gfx::Rect& bounds,
                            Browser* browser) {
 #elif defined(OS_MACOSX)
@@ -201,7 +201,7 @@
   // now for refreshing the last screenshot
 #if defined(TOOLKIT_VIEWS)
   RefreshLastScreenshot(parent);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   RefreshLastScreenshot(window, bounds);
 #elif defined(OS_MACOSX)
   RefreshLastScreenshot(window);
