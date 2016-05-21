--- ./mojo/shell/runner/init.cc.orig	2016-05-21 13:23:12.158776000 -0400
+++ ./mojo/shell/runner/init.cc	2016-05-21 13:23:54.189799000 -0400
@@ -68,6 +68,8 @@
 
 void CallLibraryEarlyInitialization(base::NativeLibrary app_library) {
   // Do whatever warming that the mojo application wants.
+
+#if !defined(OS_FREEBSD) 
   typedef void (*LibraryEarlyInitFunction)(const uint8_t*);
   LibraryEarlyInitFunction init_function =
       reinterpret_cast<LibraryEarlyInitFunction>(
@@ -79,6 +81,7 @@
     const uint8_t* icu_data = base::i18n::GetRawIcuMemory();
     init_function(icu_data);
   }
+#endif
 
   // TODO(erg): All chromium binaries load base. We might want to make a
   // general system for other people.
