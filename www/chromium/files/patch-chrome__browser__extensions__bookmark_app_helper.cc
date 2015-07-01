--- chrome/browser/extensions/bookmark_app_helper.cc.orig	Sat May 23 00:59:48 2015
+++ chrome/browser/extensions/bookmark_app_helper.cc	Sat May 23 01:03:46 2015
@@ -429,7 +429,7 @@ void BookmarkAppHelper::FinishInstallation(const Exten
   chrome::HostDesktopType desktop = browser->host_desktop_type();
   if (desktop != chrome::HOST_DESKTOP_TYPE_ASH) {
     web_app::ShortcutLocations creation_locations;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     creation_locations.on_desktop = true;
 #else
     creation_locations.on_desktop = false;
