--- device/usb/usb_device_handle_impl.cc.orig	2016-05-11 15:02:22.000000000 -0400
+++ device/usb/usb_device_handle_impl.cc	2016-05-19 20:25:15.505574000 -0400
@@ -24,7 +24,11 @@
 #include "device/usb/usb_error.h"
 #include "device/usb/usb_service.h"
 #include "net/base/io_buffer.h"
-#include "third_party/libusb/src/libusb/libusb.h"
+#if defined(OS_FREEBSD)
+#  include "libusb.h"
+#else
+#  include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace device {
 
