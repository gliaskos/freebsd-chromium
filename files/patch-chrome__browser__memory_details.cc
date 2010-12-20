--- ./chrome/browser/memory_details.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/memory_details.cc	2010-12-20 20:41:37.000000000 +0100
@@ -19,7 +19,7 @@
 #include "chrome/common/url_constants.h"
 #include "grit/chromium_strings.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "chrome/browser/zygote_host_linux.h"
 #include "chrome/browser/renderer_host/render_sandbox_host_linux.h"
 #endif
@@ -101,7 +101,7 @@
 void MemoryDetails::CollectChildInfoOnUIThread() {
   DCHECK(BrowserThread::CurrentlyOn(BrowserThread::UI));
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   const pid_t zygote_pid = Singleton<ZygoteHost>()->pid();
   const pid_t sandbox_helper_pid = Singleton<RenderSandboxHostLinux>()->pid();
 #endif
@@ -179,7 +179,7 @@
       }
     }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     if (process.pid == zygote_pid) {
       process.type = ChildProcessInfo::ZYGOTE_PROCESS;
     } else if (process.pid == sandbox_helper_pid) {
