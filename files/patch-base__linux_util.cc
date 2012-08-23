--- ./base/linux_util.cc.orig	2012-08-17 03:01:51.000000000 +0200
+++ ./base/linux_util.cc	2012-08-23 22:31:42.000000000 +0200
@@ -142,12 +142,14 @@
     "CrOS Aura";
 #elif defined(OS_CHROMEOS)
     "CrOS";
+#elif defined(OS_FREEBSD)
+    "FreeBSD";
 #else  // if defined(OS_LINUX)
     "Unknown";
 #endif
 
 std::string GetLinuxDistro() {
-#if defined(OS_CHROMEOS)
+#if defined(OS_CHROMEOS) || defined(OS_FREEBSD)
   return g_linux_distro;
 #elif defined(OS_LINUX)
   LinuxDistroHelper* distro_state_singleton = LinuxDistroHelper::GetInstance();
@@ -204,6 +206,7 @@
   return true;
 }
 
+#if defined(OS_LINUX)
 bool FindProcessHoldingSocket(pid_t* pid_out, ino_t socket_inode) {
   DCHECK(pid_out);
   bool already_found = false;
@@ -310,5 +313,5 @@
   }
   return -1;
 }
-
+#endif // if defined(OS_LINUX)
 }  // namespace base
