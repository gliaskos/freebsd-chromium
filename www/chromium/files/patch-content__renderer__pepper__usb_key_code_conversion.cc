--- ./content/renderer/pepper/usb_key_code_conversion.cc.orig	2014-07-15 21:02:44.000000000 +0200
+++ ./content/renderer/pepper/usb_key_code_conversion.cc	2014-07-20 18:13:08.000000000 +0200
@@ -10,7 +10,7 @@
 
 namespace content {
 
-#if !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_WIN)
+#if !((defined(OS_POSIX) && !defined(OS_ANDROID)) || defined(OS_WIN))
 
 uint32_t UsbKeyCodeForKeyboardEvent(const WebKeyboardEvent& key_event) {
   return 0;
