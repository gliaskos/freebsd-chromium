--- ui/message_center/views/message_center_button_bar.h.orig	Wed Dec  3 03:13:29 2014
+++ ui/message_center/views/message_center_button_bar.h	Sat Dec  6 11:34:27 2014
@@ -68,7 +68,7 @@
   // close-on-deactivation is off. This is a tentative solution. Once pkotwicz
   // Fixes the problem of focus-follow-mouse, close-on-deactivation will be
   // back and this field will be removed. See crbug.com/319516.
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   views::ImageButton* close_bubble_button_;
 #endif
