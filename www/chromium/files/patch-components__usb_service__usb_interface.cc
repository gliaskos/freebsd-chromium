--- components/usb_service/usb_interface.cc.orig	2014-07-15 21:02:29.000000000 +0200
+++ components/usb_service/usb_interface.cc	2014-08-11 21:51:17.000000000 +0200
@@ -5,7 +5,11 @@
 #include "components/usb_service/usb_interface.h"
 
 #include "base/logging.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace usb_service {
 

