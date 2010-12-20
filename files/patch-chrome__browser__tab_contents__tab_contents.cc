--- ./chrome/browser/tab_contents/tab_contents.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/tab_contents/tab_contents.cc	2010-12-20 20:41:37.000000000 +0100
@@ -414,7 +414,7 @@
                  NotificationService::AllSources());
   registrar_.Add(this, NotificationType::RENDER_WIDGET_HOST_DESTROYED,
                  NotificationService::AllSources());
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
   registrar_.Add(this, NotificationType::BROWSER_THEME_CHANGED,
                  NotificationService::AllSources());
 #endif
@@ -3148,7 +3148,7 @@
       break;
     }
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
     case NotificationType::BROWSER_THEME_CHANGED: {
       renderer_preferences_util::UpdateFromSystemSettings(
           &renderer_preferences_, profile());
