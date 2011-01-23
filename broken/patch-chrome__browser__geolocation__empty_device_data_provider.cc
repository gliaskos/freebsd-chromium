--- chrome/browser/geolocation/empty_device_data_provider.cc.orig	2010-12-13 12:04:26.000000000 +0100
+++ chrome/browser/geolocation/empty_device_data_provider.cc	2011-01-07 22:36:05.000000000 +0100
@@ -12,7 +12,7 @@
 }
 
 // Only define for platforms that lack a real wifi data provider.
-#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_LINUX) && !defined(OS_FREEBSD)
 // static
 template<>
 WifiDataProviderImplBase* WifiDataProvider::DefaultFactoryFunction() {
@@ -21,7 +21,7 @@ WifiDataProviderImplBase* WifiDataProvider::DefaultFac
 #endif
 
 // Only define for platforms that lack a real gateway data provider.
-#if !defined(OS_LINUX) && !defined(OS_WIN)
+#if !defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
 // static
 template<>
 GatewayDataProviderImplBase* GatewayDataProvider::DefaultFactoryFunction() {
