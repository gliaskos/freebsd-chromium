--- ./chrome/browser/net/connection_tester.cc.orig	2014-04-02 21:04:28.000000000 +0200
+++ ./chrome/browser/net/connection_tester.cc	2014-04-04 01:39:18.000000000 +0200
@@ -217,7 +217,7 @@
   // Otherwise returns a network error code.
   int CreateSystemProxyConfigService(
       scoped_ptr<net::ProxyConfigService>* config_service) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(eroman): This is not supported on Linux yet, because of how
     // construction needs ot happen on the UI thread.
     return net::ERR_NOT_IMPLEMENTED;
