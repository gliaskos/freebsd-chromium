--- components/usb_service/usb_service_impl.cc.orig	2014-09-04 00:29:10 UTC
+++ components/usb_service/usb_service_impl.cc
@@ -14,7 +14,11 @@
 #include "components/usb_service/usb_device_impl.h"
 #include "components/usb_service/usb_error.h"
 #include "content/public/browser/browser_thread.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace usb_service {
 
