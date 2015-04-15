--- ui/events/keycodes/dom4/keycode_converter.cc.orig	Wed Mar 11 07:51:18 2015
+++ ui/events/keycodes/dom4/keycode_converter.cc	Wed Mar 11 07:51:28 2015
@@ -15,7 +15,7 @@
 // and DOM Level 3 |code| strings.
 #if defined(OS_WIN)
 #define USB_KEYMAP(usb, xkb, win, mac, code, id) {usb, win, code}
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #define USB_KEYMAP(usb, xkb, win, mac, code, id) {usb, xkb, code}
 #elif defined(OS_MACOSX)
 #define USB_KEYMAP(usb, xkb, win, mac, code, id) {usb, mac, code}
