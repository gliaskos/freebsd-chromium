--- content/browser/devtools/protocol/color_picker.cc.orig	2015-05-26 14:11:00.773252000 -0400
+++ content/browser/devtools/protocol/color_picker.cc	2015-05-26 14:11:24.903922000 -0400
@@ -148,7 +148,7 @@
   // magnified projection only with centered hotspot.
   // Mac Retina requires cursor to be > 120px in order to render smoothly.
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   const float kCursorSize = 63;
   const float kDiameter = 63;
   const float kHotspotOffset = 32;
