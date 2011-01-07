--- ./chrome/browser/dom_ui/bug_report_ui.h.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/dom_ui/bug_report_ui.h	2011-01-07 14:17:10.000000000 +0100
@@ -22,7 +22,7 @@
 namespace browser {
 #if defined(TOOLKIT_VIEWS)
 void ShowHtmlBugReportView(views::Window* parent, Browser* browser);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 void ShowHtmlBugReportView(gfx::NativeWindow window, const gfx::Rect& bounds,
                            Browser* browser);
 #elif defined(OS_MACOSX)
