--- ui/views/views_delegate.h.orig	2014-10-10 08:54:19 UTC
+++ ui/views/views_delegate.h
@@ -100,7 +100,7 @@
   // Returns true if the window passed in is in the Windows 8 metro
   // environment.
   virtual bool IsWindowInMetro(gfx::NativeWindow window) const;
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   virtual gfx::ImageSkia* GetDefaultWindowIcon() const;
 #endif
 
