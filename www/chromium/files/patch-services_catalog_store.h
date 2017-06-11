--- services/catalog/store.h.orig	2017-06-05 19:03:11 UTC
+++ services/catalog/store.h
@@ -33,6 +33,7 @@ class Store {
   static const char kRequiredFilesKey_PlatformValue_Linux[];
   static const char kRequiredFilesKey_PlatformValue_MacOSX[];
   static const char kRequiredFilesKey_PlatformValue_Android[];
+  static const char kRequiredFilesKey_PlatformValue_FreeBSD[];
 };
 
 }  // namespace catalog
