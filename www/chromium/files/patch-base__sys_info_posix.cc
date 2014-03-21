--- ./base/sys_info_posix.cc.orig	2014-03-19 20:01:55.000000000 +0100
+++ ./base/sys_info_posix.cc	2014-03-21 00:27:12.000000000 +0100
@@ -49,7 +49,7 @@
 
 namespace base {
 
-#if !defined(OS_OPENBSD)
+#if !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 int SysInfo::NumberOfProcessors() {
   return g_lazy_number_of_processors.Get().value();
 }
