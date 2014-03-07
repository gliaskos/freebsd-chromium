--- ./content/browser/browser_main_loop.cc.orig	2014-03-04 03:17:48.000000000 +0100
+++ ./content/browser/browser_main_loop.cc	2014-03-07 14:10:33.000000000 +0100
@@ -102,7 +102,7 @@
 #include "ui/gfx/gtk_util.h"
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 #include <sys/stat.h>
 
 #include "content/browser/renderer_host/render_sandbox_host_linux.h"
@@ -125,7 +125,7 @@
 namespace content {
 namespace {
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 void SetupSandbox(const CommandLine& parsed_command_line) {
   TRACE_EVENT0("startup", "SetupSandbox");
   // TODO(evanm): move this into SandboxWrapper; I'm just trying to move this
@@ -346,7 +346,7 @@
 void BrowserMainLoop::EarlyInitialization() {
   TRACE_EVENT0("startup", "BrowserMainLoop::EarlyInitialization");
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
   // No thread should be created before this call, as SetupSandbox()
   // will end-up using fork().
   SetupSandbox(parsed_command_line_);
@@ -784,7 +784,7 @@
   }
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
   ZygoteHostImpl::GetInstance()->TearDownAfterLastChild();
 #endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
 
