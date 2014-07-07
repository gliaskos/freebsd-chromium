--- ./ui/events/event_switches.h.orig	2014-06-30 21:02:38.000000000 +0200
+++ ./ui/events/event_switches.h	2014-07-07 15:12:51.000000000 +0200
@@ -17,7 +17,7 @@
 EVENTS_BASE_EXPORT extern const char kTouchEventsDisabled[];
 EVENTS_BASE_EXPORT extern const char kUseUnifiedGestureDetector[];
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 EVENTS_BASE_EXPORT extern const char kTouchDevices[];
 #endif
 
