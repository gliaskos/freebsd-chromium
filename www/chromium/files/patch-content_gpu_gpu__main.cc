--- content/gpu/gpu_main.cc.orig	2019-12-16 21:51:26 UTC
+++ content/gpu/gpu_main.cc
@@ -82,7 +82,7 @@
 #include "ui/gfx/x/x11_switches.h"    // nogncheck
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "content/gpu/gpu_sandbox_hook_linux.h"
 #include "content/public/common/sandbox_init.h"
 #include "services/service_manager/sandbox/linux/sandbox_linux.h"
@@ -103,7 +103,7 @@ namespace content {
 
 namespace {
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
 bool StartSandboxLinux(gpu::GpuWatchdogThread*,
                        const gpu::GPUInfo*,
                        const gpu::GpuPreferences&);
@@ -164,7 +164,7 @@ class ContentSandboxHelper : public gpu::GpuSandboxHel
   bool EnsureSandboxInitialized(gpu::GpuWatchdogThread* watchdog_thread,
                                 const gpu::GPUInfo* gpu_info,
                                 const gpu::GpuPreferences& gpu_prefs) override {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
     return StartSandboxLinux(watchdog_thread, gpu_info, gpu_prefs);
 #elif defined(OS_WIN)
     return StartSandboxWindows(sandbox_info_);
@@ -268,7 +268,7 @@ int GpuMain(const MainFunctionParams& parameters) {
     main_thread_task_executor =
         std::make_unique<base::SingleThreadTaskExecutor>(
             gpu_preferences.message_pump_type);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #error "Unsupported Linux platform."
 #elif defined(OS_MACOSX)
     // Cross-process CoreAnimation requires a CFRunLoop to function at all, and
@@ -372,7 +372,7 @@ int GpuMain(const MainFunctionParams& parameters) {
 
 namespace {
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
 bool StartSandboxLinux(gpu::GpuWatchdogThread* watchdog_thread,
                        const gpu::GPUInfo* gpu_info,
                        const gpu::GpuPreferences& gpu_prefs) {
@@ -407,7 +407,7 @@ bool StartSandboxLinux(gpu::GpuWatchdogThread* watchdo
 
   return res;
 }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) && !defined(OS_BSD)
 
 #if defined(OS_WIN)
 bool StartSandboxWindows(const sandbox::SandboxInterfaceInfo* sandbox_info) {
