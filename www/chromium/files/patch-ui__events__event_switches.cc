--- ./ui/events/event_switches.cc.orig	2014-06-30 21:02:38.000000000 +0200
+++ ./ui/events/event_switches.cc	2014-07-07 15:12:51.000000000 +0200
@@ -22,7 +22,7 @@
 // Use the unified gesture detector, instead of the aura gesture detector.
 const char kUseUnifiedGestureDetector[] = "use-unified-gesture-detector";
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Tells chrome to interpret events from these devices as touch events. Only
 // available with XInput 2 (i.e. X server 1.8 or above). The id's of the
 // devices can be retrieved from 'xinput list'.
