--- content/renderer/pepper/usb_key_code_conversion.cc.orig	2014-09-04 00:04:16 UTC
+++ content/renderer/pepper/usb_key_code_conversion.cc
@@ -10,7 +10,7 @@
 
 namespace content {
 
-#if !defined(OS_LINUX) && !defined(OS_MACOSX) && !defined(OS_WIN)
+#if !((defined(OS_POSIX) && !defined(OS_ANDROID)) || defined(OS_WIN))
 
 uint32_t UsbKeyCodeForKeyboardEvent(const WebKeyboardEvent& key_event) {
   return 0;
