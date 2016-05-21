--- ui/views/style/platform_style.cc.orig	Sat Apr 16 11:59:30 2016
+++ ui/views/style/platform_style.cc	Sat Apr 16 11:59:47 2016
@@ -34,7 +34,7 @@ scoped_ptr<ScrollBar> PlatformStyle::CreateScrollBar(b
 
 #endif
 
-#if !defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if (!defined(OS_LINUX) && !defined(OS_BSD)) || defined(OS_CHROMEOS)
 // static
 scoped_ptr<Border> PlatformStyle::CreateThemedLabelButtonBorder(
     LabelButton* button) {
