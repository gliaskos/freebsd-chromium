--- ./ui/views/views_delegate.cc.orig	2014-07-15 21:02:14.000000000 +0200
+++ ./ui/views/views_delegate.cc	2014-07-20 18:13:10.000000000 +0200
@@ -50,7 +50,7 @@
 bool ViewsDelegate::IsWindowInMetro(gfx::NativeWindow window) const {
   return false;
 }
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 gfx::ImageSkia* ViewsDelegate::GetDefaultWindowIcon() const {
   return NULL;
 }
