--- ./chrome/browser/shell_integration_linux.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/shell_integration_linux.cc	2012-08-23 22:31:43.000000000 +0200
@@ -122,6 +122,8 @@
   if (!PathService::Get(chrome::DIR_USER_DESKTOP, &desktop_path))
     return false;
 
+#if !defined(OS_FREEBSD)
+// BSD: Linux-specific calls like openat are used so defined out for BSD.
   int desktop_fd = open(desktop_path.value().c_str(), O_RDONLY | O_DIRECTORY);
   if (desktop_fd < 0)
     return false;
@@ -150,7 +152,7 @@
 
   if (HANDLE_EINTR(close(desktop_fd)) < 0)
     PLOG(ERROR) << "close";
-
+#endif // OS_FREEBSD
   return true;
 }
 
