--- ./content/browser/geolocation/location_arbitrator_impl.cc.orig	2014-07-15 21:02:50.000000000 +0200
+++ ./content/browser/geolocation/location_arbitrator_impl.cc	2014-07-20 18:13:08.000000000 +0200
@@ -160,7 +160,7 @@
 }
 
 LocationProvider* LocationArbitratorImpl::NewSystemLocationProvider() {
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_FREEBSD)
   return NULL;
 #else
   return content::NewSystemLocationProvider();
