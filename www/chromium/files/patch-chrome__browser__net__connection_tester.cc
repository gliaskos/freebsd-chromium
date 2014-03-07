--- ./chrome/browser/net/connection_tester.cc.orig	2014-03-04 03:17:02.000000000 +0100
+++ ./chrome/browser/net/connection_tester.cc	2014-03-07 14:10:32.000000000 +0100
@@ -216,7 +216,7 @@
   // Otherwise returns a network error code.
   int CreateSystemProxyConfigService(
       scoped_ptr<net::ProxyConfigService>* config_service) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(eroman): This is not supported on Linux yet, because of how
     // construction needs ot happen on the UI thread.
     return net::ERR_NOT_IMPLEMENTED;
