--- net/socket/client_socket_factory.cc.orig   Sat May 23 00:59:48 2015
+++ net/socket/client_socket_factory.cc Sat May 23 01:14:38 2015
@@ -28,7 +28,7 @@ namespace {
 // may cause NSS functions to block for upwards of several seconds. To avoid
 // blocking all activity on the current task runner, such as network or IPC
 // traffic, run NSS SSL functions on a dedicated thread.
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 bool g_use_dedicated_nss_thread = true;
 #else
 bool g_use_dedicated_nss_thread = false;
