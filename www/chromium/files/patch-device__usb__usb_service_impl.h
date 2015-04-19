--- device/usb/usb_service_impl.h.orig	2015-04-19 16:22:47.000000000 +0200
+++ device/usb/usb_service_impl.h	2015-04-19 16:24:18.000000000 +0200
@@ -10,7 +10,13 @@
 #include "base/single_thread_task_runner.h"
 #include "device/usb/usb_context.h"
 #include "device/usb/usb_device_impl.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#define LIBUSB_CALL
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+endif
+
 
 namespace device {
 
