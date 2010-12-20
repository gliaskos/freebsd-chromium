--- ./chrome/browser/ui/views/find_bar_view.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/find_bar_view.cc	2010-12-20 20:41:37.000000000 +0100
@@ -85,7 +85,7 @@
 
 FindBarView::FindBarView(FindBarHost* host)
     : DropdownBarView(host),
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
       ignore_contents_changed_(false),
 #endif
       find_text_(NULL),
@@ -174,11 +174,11 @@
 }
 
 void FindBarView::SetFindText(const string16& find_text) {
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   ignore_contents_changed_ = true;
 #endif
   find_text_->SetText(find_text);
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   ignore_contents_changed_ = false;
 #endif
 }
@@ -450,7 +450,7 @@
 
 void FindBarView::ContentsChanged(views::Textfield* sender,
                                   const string16& new_contents) {
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   // On gtk setting the text in the find view causes a notification.
   if (ignore_contents_changed_)
     return;
