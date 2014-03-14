--- ./chrome/browser/net/connection_tester.cc.orig	2014-03-12 20:21:49.000000000 +0100
+++ ./chrome/browser/net/connection_tester.cc	2014-03-14 09:23:25.000000000 +0100
@@ -217,7 +217,7 @@
   // Otherwise returns a network error code.
   int CreateSystemProxyConfigService(
       scoped_ptr<net::ProxyConfigService>* config_service) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(eroman): This is not supported on Linux yet, because of how
     // construction needs ot happen on the UI thread.
     return net::ERR_NOT_IMPLEMENTED;
