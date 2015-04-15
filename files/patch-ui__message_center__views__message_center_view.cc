--- ui/message_center/views/message_center_view.cc.orig	Tue Mar 10 23:29:17 2015
+++ ui/message_center/views/message_center_view.cc	Wed Mar 11 07:22:50 2015
@@ -47,7 +47,7 @@
 namespace {
 
 const SkColor kNoNotificationsTextColor = SkColorSetRGB(0xb4, 0xb4, 0xb4);
-#if defined(OS_LINUX) && defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && defined(OS_CHROMEOS)
 const SkColor kTransparentColor = SkColorSetARGB(0, 0, 0, 0);
 #endif
 const int kAnimateClearingNextNotificationDelayMS = 40;
@@ -86,7 +86,7 @@
   label_->SetEnabledColor(kNoNotificationsTextColor);
   // Set transparent background to ensure that subpixel rendering
   // is disabled. See crbug.com/169056
-#if defined(OS_LINUX) && defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && defined(OS_CHROMEOS)
   label_->SetBackgroundColor(kTransparentColor);
 #endif
   AddChildView(label_);
