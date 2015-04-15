--- ui/message_center/views/notification_view.cc.orig	Thu Oct  2 19:39:48 2014
+++ ui/message_center/views/notification_view.cc	Fri Oct 10 16:10:31 2014
@@ -278,7 +278,7 @@
   NotificationView* notification_view =
       new NotificationView(controller, notification);
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // Don't create shadows for notification toasts on linux wih aura.
   if (top_level)
     return notification_view;
