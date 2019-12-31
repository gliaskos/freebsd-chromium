--- chrome/browser/profiles/chrome_browser_main_extra_parts_profiles.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/profiles/chrome_browser_main_extra_parts_profiles.cc
@@ -186,7 +186,7 @@
 #include "chrome/browser/safe_browsing/advanced_protection_status_manager_factory.h"
 #endif
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 #include "chrome/browser/sync/sync_clipboard_service_factory.h"
 #endif
 
@@ -352,7 +352,7 @@ void ChromeBrowserMainExtraPartsProfiles::
   MediaGalleriesPreferencesFactory::GetInstance();
 #endif
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   metrics::DesktopProfileSessionDurationsServiceFactory::GetInstance();
 #endif
   ModelTypeStoreServiceFactory::GetInstance();
@@ -415,7 +415,7 @@ void ChromeBrowserMainExtraPartsProfiles::
   StorageNotificationServiceFactory::GetInstance();
 #endif
   suggestions::SuggestionsServiceFactory::GetInstance();
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   SyncClipboardServiceFactory::GetInstance();
 #endif
   TabRestoreServiceFactory::GetInstance();
