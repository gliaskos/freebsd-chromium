--- base/process_util_posix.cc.orig	2011-09-10 01:29:53.000000000 +0300
+++ base/process_util_posix.cc	2011-09-10 01:31:28.000000000 +0300
@@ -127,7 +127,7 @@
 
 // Android has built-in crash handling.
 #if !defined(OS_ANDROID)
-void StackDumpSignalHandler(int signal, siginfo_t* info, ucontext_t* context) {
+void StackDumpSignalHandler(int signal, siginfo_t* info /*, ucontext_t* context*/) {
   if (debug::BeingDebugged())
     debug::BreakDebugger();
 
