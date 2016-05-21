--- ./chrome/browser/ui/views/chrome_views_delegate.h.orig	2016-05-11 15:02:16.000000000 -0400
+++ ./chrome/browser/ui/views/chrome_views_delegate.h	2016-05-19 20:02:13.617472000 -0400
@@ -35,7 +35,7 @@
 #if defined(OS_WIN)
   HICON GetDefaultWindowIcon() const override;
   HICON GetSmallWindowIcon() const override;
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   gfx::ImageSkia* GetDefaultWindowIcon() const override;
 #endif
 
@@ -48,7 +48,7 @@
   void OnBeforeWidgetInit(
       views::Widget::InitParams* params,
       views::internal::NativeWidgetDelegate* delegate) override;
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   bool WindowManagerProvidesTitleBar(bool maximized) override;
 #endif
   ui::ContextFactory* GetContextFactory() override;
