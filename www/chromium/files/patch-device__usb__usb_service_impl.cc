--- device/usb/usb_service_impl.cc.orig	2015-10-13 15:04:32.000000000 -0400
+++ device/usb/usb_service_impl.cc	2015-10-14 11:06:11.718800000 -0400
@@ -20,7 +20,11 @@
 #include "device/usb/usb_device_handle.h"
 #include "device/usb/usb_error.h"
 #include "device/usb/webusb_descriptors.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 #if defined(OS_WIN)
 #include <setupapi.h>
@@ -541,6 +545,7 @@
   }
   context_ = new UsbContext(platform_context);
 
+#if !defined(OS_FREEBSD)
   rv = libusb_hotplug_register_callback(
       context_->context(),
       static_cast<libusb_hotplug_event>(LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED |
@@ -559,13 +564,16 @@
     device_observer_.Add(device_monitor);
   }
 #endif  // OS_WIN
+#endif  // OS_FREEBSD
 }
 
 UsbServiceImpl::~UsbServiceImpl() {
 
+#if !defined(OS_FREEBSD)
   if (hotplug_enabled_) {
     libusb_hotplug_deregister_callback(context_->context(), hotplug_handle_);
   }
+#endif  // OS_FREEBSD
   for (const auto& map_entry : devices_) {
     map_entry.second->OnDisconnect();
   }
@@ -803,6 +811,7 @@
   device->OnDisconnect();
 }
 
+#if !defined(OS_FREEBSD)
 // static
 int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb_context* context,
                                                 PlatformUsbDevice device,
@@ -840,6 +849,7 @@
 
   return 0;
 }
+#endif // !OS_FREEBSD
 
 void UsbServiceImpl::OnPlatformDeviceAdded(PlatformUsbDevice platform_device) {
   DCHECK(CalledOnValidThread());
