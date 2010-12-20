--- ./base/worker_pool_linux.cc.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./base/worker_pool_linux.cc	2010-12-20 20:41:37.000000000 +0100
@@ -17,7 +17,7 @@
 const int kIdleSecondsBeforeExit = 10 * 60;
 // A stack size of 64 KB is too small for the CERT_PKIXVerifyCert
 // function of NSS because of NSS bug 439169.
-const int kWorkerThreadStackSize = 128 * 1024;
+const int kWorkerThreadStackSize = 256 * 1024;
 
 class WorkerPoolImpl {
  public:
