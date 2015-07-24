--- ui/views/views_delegate.h.orig	2015-07-22 22:02:35.028909000 -0400
+++ ui/views/views_delegate.h	2015-07-22 22:03:21.321036000 -0400
@@ -139,7 +139,7 @@
   // Returns the user-visible name of the application.
   virtual std::string GetApplicationName();
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_BSD)
   // Get a task runner suitable for posting initialization tasks for
   // Aura Linux accessibility.
   virtual scoped_refptr<base::TaskRunner>
