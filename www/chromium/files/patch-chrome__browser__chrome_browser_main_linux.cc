--- chrome/browser/chrome_browser_main_linux.cc.orig	2016-05-21 12:00:15.266250000 -0400
+++ chrome/browser/chrome_browser_main_linux.cc	2016-05-21 12:01:00.736239000 -0400
@@ -62,12 +62,14 @@
 void ChromeBrowserMainPartsLinux::PostProfileInit() {
   ChromeBrowserMainPartsPosix::PostProfileInit();
 
+#if !defined(OS_BSD)
   g_browser_process->metrics_service()->RecordBreakpadRegistration(
       breakpad::IsCrashReporterEnabled());
+#endif
 }
 
 void ChromeBrowserMainPartsLinux::PostMainMessageLoopStart() {
-#if !defined(OS_CHROMEOS)
+#if !defined(OS_CHROMEOS) && !defined(OS_BSD)
   bluez::DBusThreadManagerLinux::Initialize();
   bluez::BluezDBusManager::Initialize(
       bluez::DBusThreadManagerLinux::Get()->GetSystemBus(), false);
@@ -77,7 +79,7 @@
 }
 
 void ChromeBrowserMainPartsLinux::PostDestroyThreads() {
-#if !defined(OS_CHROMEOS)
+#if !defined(OS_CHROMEOS) && !defined(OS_BSD)
   bluez::BluezDBusManager::Shutdown();
   bluez::DBusThreadManagerLinux::Shutdown();
 #endif
