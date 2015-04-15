--- ui/views/controls/menu/menu_scroll_view_container.cc.orig	Wed Sep 10 22:24:23 2014
+++ ui/views/controls/menu/menu_scroll_view_container.cc	Wed Sep 10 22:25:18 2014
@@ -281,7 +281,7 @@
   int padding = menu_config.corner_radius > 0 ?
         kBorderPaddingDueToRoundedCorners : 0;
 
-#if defined(USE_AURA) && !(defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if defined(USE_AURA) && !((defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS))
   if (menu_config.native_theme == ui::NativeThemeAura::instance()) {
     // In case of NativeThemeAura the border gets drawn with the shadow.
     // Furthermore no additional padding is wanted.
