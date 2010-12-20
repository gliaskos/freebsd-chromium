--- ./net/base/host_resolver_impl.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/host_resolver_impl.cc	2010-12-20 20:41:37.000000000 +0100
@@ -199,13 +199,11 @@
 std::vector<int> GetAllGetAddrinfoOSErrors() {
   int os_errors[] = {
 #if defined(OS_POSIX)
-    EAI_ADDRFAMILY,
     EAI_AGAIN,
     EAI_BADFLAGS,
     EAI_FAIL,
     EAI_FAMILY,
     EAI_MEMORY,
-    EAI_NODATA,
     EAI_NONAME,
     EAI_SERVICE,
     EAI_SOCKTYPE,
@@ -919,7 +917,7 @@
 #if defined(OS_WIN)
   EnsureWinsockInit();
 #endif
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   if (HaveOnlyLoopbackAddresses())
     additional_resolver_flags_ |= HOST_RESOLVER_LOOPBACK_ONLY;
 #endif
@@ -1312,7 +1310,7 @@
     ipv6_probe_job_ = new IPv6ProbeJob(this);
     ipv6_probe_job_->Start();
   }
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   if (HaveOnlyLoopbackAddresses()) {
     additional_resolver_flags_ |= HOST_RESOLVER_LOOPBACK_ONLY;
   } else {
