--- base/sys_info_posix.cc.orig	2014-09-04 00:29:09 UTC
+++ base/sys_info_posix.cc
@@ -64,7 +64,7 @@
 
 namespace base {
 
-#if !defined(OS_OPENBSD)
+#if !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 int SysInfo::NumberOfProcessors() {
   return g_lazy_number_of_processors.Get().value();
 }
