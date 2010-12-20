--- ./base/debug/debugger_posix.cc.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./base/debug/debugger_posix.cc	2010-12-20 20:41:37.000000000 +0100
@@ -127,7 +127,7 @@
 
 #elif defined(OS_FREEBSD)
 
-bool DebugUtil::BeingDebugged() {
+bool BeingDebugged() {
   // TODO(benl): can we determine this under FreeBSD?
   NOTIMPLEMENTED();
   return false;
