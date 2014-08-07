--- ./sync/util/get_session_name_linux.cc.orig	2014-07-15 21:02:53.000000000 +0200
+++ ./sync/util/get_session_name_linux.cc	2014-07-20 18:13:09.000000000 +0200
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
