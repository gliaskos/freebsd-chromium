--- ./base/sys_info_posix.cc.orig	2014-03-12 20:21:44.000000000 +0100
+++ ./base/sys_info_posix.cc	2014-03-14 09:23:25.000000000 +0100
@@ -49,7 +49,7 @@
 
 namespace base {
 
-#if !defined(OS_OPENBSD)
+#if !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 int SysInfo::NumberOfProcessors() {
   return g_lazy_number_of_processors.Get().value();
 }
