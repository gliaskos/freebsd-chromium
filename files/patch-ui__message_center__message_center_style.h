--- ui/message_center/message_center_style.h.orig	Thu Oct  2 19:19:03 2014
+++ ui/message_center/message_center_style.h	Fri Oct 10 16:10:31 2014
@@ -102,7 +102,7 @@
 const int kButtonIconTopPadding = 11;      // In DIPs.
 const int kButtonIconToTitlePadding = 16;  // In DIPs.
 
-#if !defined(OS_LINUX) || defined(USE_AURA)
+#if (!defined(OS_LINUX) && !defined(OS_BSD)) || defined(USE_AURA)
 const SkColor kButtonSeparatorColor = SkColorSetRGB(234, 234, 234);
 const SkColor kHoveredButtonBackgroundColor = SkColorSetRGB(243, 243, 243);
 #endif
