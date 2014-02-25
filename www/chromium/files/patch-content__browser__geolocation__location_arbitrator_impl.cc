--- ./content/browser/geolocation/location_arbitrator_impl.cc.orig	2014-02-20 21:28:23.000000000 +0100
+++ ./content/browser/geolocation/location_arbitrator_impl.cc	2014-02-24 17:23:44.000000000 +0100
@@ -160,7 +160,7 @@
 }
 
 LocationProvider* LocationArbitratorImpl::NewSystemLocationProvider() {
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_FREEBSD)
   return NULL;
 #else
   return content::NewSystemLocationProvider();
