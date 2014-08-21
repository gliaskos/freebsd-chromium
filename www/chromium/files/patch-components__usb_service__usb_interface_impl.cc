--- ./components/usb_service/usb_interface_impl.cc.orig	2014-08-13 21:03:14.000000000 +0200
+++ ./components/usb_service/usb_interface_impl.cc	2014-08-21 22:18:51.000000000 +0200
@@ -5,7 +5,11 @@
 #include "components/usb_service/usb_interface_impl.h"
 
 #include "base/logging.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace usb_service {
 
