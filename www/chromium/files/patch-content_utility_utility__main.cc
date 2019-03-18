--- content/utility/utility_main.cc.orig	2019-03-11 22:00:58 UTC
+++ content/utility/utility_main.cc
@@ -19,7 +19,7 @@
 #include "content/utility/utility_thread_impl.h"
 #include "services/service_manager/sandbox/sandbox.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "services/audio/audio_sandbox_hook_linux.h"
 #include "services/network/network_sandbox_hook_linux.h"
 #include "services/service_manager/sandbox/linux/sandbox_linux.h"
@@ -69,7 +69,7 @@ int UtilityMain(const MainFunctionParams& parameters) 
   if (parameters.command_line.HasSwitch(switches::kUtilityStartupDialog))
     WaitForDebugger("Utility");
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Initializes the sandbox before any threads are created.
   // TODO(jorgelo): move this after GTK initialization when we enable a strict
   // Seccomp-BPF policy.
