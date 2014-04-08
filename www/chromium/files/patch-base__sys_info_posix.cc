--- ./base/sys_info_posix.cc.orig	2014-04-02 21:03:58.000000000 +0200
+++ ./base/sys_info_posix.cc	2014-04-04 01:39:18.000000000 +0200
@@ -49,7 +49,7 @@
 
 namespace base {
 
-#if !defined(OS_OPENBSD)
+#if !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 int SysInfo::NumberOfProcessors() {
   return g_lazy_number_of_processors.Get().value();
 }
