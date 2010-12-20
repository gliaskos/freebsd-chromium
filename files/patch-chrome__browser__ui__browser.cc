--- ./chrome/browser/ui/browser.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/browser.cc	2010-12-20 20:41:37.000000000 +0100
@@ -272,7 +272,7 @@
 
   BrowserList::RemoveBrowser(this);
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
   if (!BrowserList::HasBrowserWithProfile(profile_)) {
     // We're the last browser window with this profile. We need to nuke the
     // TabRestoreService, which will start the shutdown of the
@@ -781,7 +781,7 @@
   // On Mac or ChromeOS, we don't want to suffix the page title with
   // the application name.
   return title;
-#elif defined(OS_WIN) || defined(OS_LINUX)
+#elif defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
   int string_id = IDS_BROWSER_WINDOW_TITLE_FORMAT;
   // Don't append the app name to window titles on app frames and app popups
   if (type_ & TYPE_APP)
@@ -1427,7 +1427,7 @@
   window_->SetFullscreen(!window_->IsFullscreen());
   // On Linux, setting fullscreen mode is an async call to the X server, which
   // may or may not support fullscreen mode.
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) && !defined(OS_FREEBSD)
   UpdateCommandsForFullscreenMode(window_->IsFullscreen());
 #endif
 }
@@ -1678,7 +1678,7 @@
 
 void Browser::OpenCreateShortcutsDialog() {
   UserMetrics::RecordAction(UserMetricsAction("CreateShortcut"), profile_);
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
   TabContentsWrapper* current_tab = GetSelectedTabContentsWrapper();
   DCHECK(current_tab &&
       web_app::IsValidUrl(current_tab->tab_contents()->GetURL())) <<
@@ -2477,7 +2477,7 @@
 }
 
 void Browser::CloseFrameAfterDragSession() {
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
   // This is scheduled to run after we return to the message loop because
   // otherwise the frame will think the drag session is still active and ignore
   // the request.
