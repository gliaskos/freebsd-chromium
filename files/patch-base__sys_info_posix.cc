--- ./base/sys_info_posix.cc.orig	2012-08-17 03:01:51.000000000 +0200
+++ ./base/sys_info_posix.cc	2012-08-23 22:31:42.000000000 +0200
@@ -24,7 +24,7 @@
 
 namespace base {
 
-#if !defined(OS_OPENBSD)
+#if !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 int SysInfo::NumberOfProcessors() {
   // It seems that sysconf returns the number of "logical" processors on both
   // Mac and Linux.  So we get the number of "online logical" processors.
