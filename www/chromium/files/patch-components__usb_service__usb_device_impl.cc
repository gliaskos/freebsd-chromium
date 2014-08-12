--- components/usb_service/usb_device_impl.cc.orig	2014-07-15 21:02:29.000000000 +0200
+++ components/usb_service/usb_device_impl.cc	2014-08-11 21:51:14.000000000 +0200
@@ -10,7 +10,11 @@
 #include "components/usb_service/usb_context.h"
 #include "components/usb_service/usb_device_handle.h"
 #include "content/public/browser/browser_thread.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 #if defined(OS_CHROMEOS)
 #include "base/sys_info.h"

