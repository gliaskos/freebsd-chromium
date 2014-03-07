--- ./sync/util/get_session_name_linux.cc.orig	2014-03-05 22:24:10.000000000 +0100
+++ ./sync/util/get_session_name_linux.cc	2014-03-07 23:57:27.000000000 +0100
@@ -13,8 +13,9 @@
 namespace internal {
 
 std::string GetHostname() {
-  char hostname[HOST_NAME_MAX];
-  if (gethostname(hostname, HOST_NAME_MAX) == 0)  // Success.
+  int len = sysconf(_SC_HOST_NAME_MAX);
+  char hostname[len];
+  if (gethostname(hostname, len) == 0)  // Success.
     return hostname;
   return base::GetLinuxDistro();
 }
