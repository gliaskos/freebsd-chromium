--- ./chrome/browser/process_singleton_linux.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/process_singleton_linux.cc	2010-12-20 20:41:37.000000000 +0100
@@ -325,23 +325,24 @@
 }
 
 bool IsChromeProcess(pid_t pid) {
-  FilePath other_chrome_path(base::GetProcessExecutablePath(pid));
+/*  FilePath other_chrome_path(base::GetProcessExecutablePath(pid));
   return (!other_chrome_path.empty() &&
           other_chrome_path.BaseName() ==
-          FilePath::FromWStringHack(chrome::kBrowserProcessExecutableName));
+          FilePath::FromWStringHack(chrome::kBrowserProcessExecutableName));*/
+  return true;
 }
 
 // Return true if the given pid is one of our child processes.
 // Assumes that the current pid is the root of all pids of the current instance.
 bool IsSameChromeInstance(pid_t pid) {
   pid_t cur_pid = base::GetCurrentProcId();
-  while (pid != cur_pid) {
+/*  while (pid != cur_pid) {
     pid = base::GetParentProcessId(pid);
     if (pid < 0)
       return false;
     if (!IsChromeProcess(pid))
       return false;
-  }
+  }*/
   return true;
 }
 
