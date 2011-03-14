--- chrome/browser/process_singleton_linux.cc.orig	2011-01-06 10:01:46.000000000 +0100
+++ chrome/browser/process_singleton_linux.cc	2011-01-09 20:22:34.000000000 +0100
@@ -313,15 +313,19 @@
 }
 
 bool IsChromeProcess(pid_t pid) {
+/*
   FilePath other_chrome_path(base::GetProcessExecutablePath(pid));
   return (!other_chrome_path.empty() &&
           other_chrome_path.BaseName() ==
           FilePath(chrome::kBrowserProcessExecutableName));
+*/
+  return true;
 }
 
 // Return true if the given pid is one of our child processes.
 // Assumes that the current pid is the root of all pids of the current instance.
 bool IsSameChromeInstance(pid_t pid) {
+/*
   pid_t cur_pid = base::GetCurrentProcId();
   while (pid != cur_pid) {
     pid = base::GetParentProcessId(pid);
@@ -330,6 +334,7 @@
     if (!IsChromeProcess(pid))
       return false;
   }
+*/
   return true;
 }
 
