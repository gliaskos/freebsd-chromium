--- ./ui/views/views_delegate.h.orig	2014-06-30 21:02:40.000000000 +0200
+++ ./ui/views/views_delegate.h	2014-07-14 13:36:20.000000000 +0200
@@ -94,7 +94,7 @@
   // Returns true if the window passed in is in the Windows 8 metro
   // environment.
   virtual bool IsWindowInMetro(gfx::NativeWindow window) const;
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
   virtual gfx::ImageSkia* GetDefaultWindowIcon() const;
 #endif
 
