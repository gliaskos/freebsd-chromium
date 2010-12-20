--- ./chrome/browser/wrench_menu_model.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/wrench_menu_model.cc	2010-12-20 20:41:37.000000000 +0100
@@ -386,7 +386,7 @@
                              IDS_NEW_INCOGNITO_WINDOW);
 
   AddSeparator();
-#if defined(OS_MACOSX) || (defined(OS_LINUX) && !defined(TOOLKIT_VIEWS))
+#if defined(OS_POSIX) && !defined(TOOLKIT_VIEWS)
   // WARNING: Mac does not use the ButtonMenuItemModel, but instead defines the
   // layout for this menu item in Toolbar.xib. It does, however, use the
   // command_id value from AddButtonItem() to identify this special item.
@@ -401,7 +401,7 @@
 #endif
 
   AddSeparator();
-#if defined(OS_MACOSX) || (defined(OS_LINUX) && !defined(TOOLKIT_VIEWS))
+#if defined(OS_POSIX) && !defined(TOOLKIT_VIEWS)
   // WARNING: See above comment.
   zoom_menu_item_model_.reset(
       new menus::ButtonMenuItemModel(IDS_ZOOM_MENU, this));
