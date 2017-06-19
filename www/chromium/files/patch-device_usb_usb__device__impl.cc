--- device/usb/usb_device_impl.cc.orig	2017-06-05 19:03:07 UTC
+++ device/usb/usb_device_impl.cc
@@ -22,7 +22,11 @@
 #include "device/usb/usb_descriptors.h"
 #include "device/usb/usb_device_handle_impl.h"
 #include "device/usb/usb_error.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace device {
 
