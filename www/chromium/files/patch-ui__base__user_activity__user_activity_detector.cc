--- ui/base/user_activity/user_activity_detector.cc.orig	2016-02-06 12:31:09 UTC
+++ ui/base/user_activity/user_activity_detector.cc
@@ -52,7 +52,7 @@ UserActivityDetector::UserActivityDetect
 
   ui::PlatformEventSource* platform_event_source =
       ui::PlatformEventSource::GetInstance();
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
   CHECK(platform_event_source);
 #endif
   if (platform_event_source)
@@ -62,7 +62,7 @@ UserActivityDetector::UserActivityDetect
 UserActivityDetector::~UserActivityDetector() {
   ui::PlatformEventSource* platform_event_source =
       ui::PlatformEventSource::GetInstance();
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
   CHECK(platform_event_source);
 #endif
   if (platform_event_source)
