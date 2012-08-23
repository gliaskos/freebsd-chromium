--- ./chrome/browser/net/connection_tester.cc.orig	2012-08-17 03:02:02.000000000 +0200
+++ ./chrome/browser/net/connection_tester.cc	2012-08-23 22:31:43.000000000 +0200
@@ -207,7 +207,7 @@
   // Otherwise returns a network error code.
   int CreateSystemProxyConfigService(
       scoped_ptr<net::ProxyConfigService>* config_service) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(eroman): This is not supported on Linux yet, because of how
     // construction needs ot happen on the UI thread.
     return net::ERR_NOT_IMPLEMENTED;
