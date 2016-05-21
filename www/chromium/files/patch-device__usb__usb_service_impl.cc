--- device/usb/usb_service_impl.cc.orig	2016-05-11 15:02:22.000000000 -0400
+++ device/usb/usb_service_impl.cc	2016-05-19 20:27:40.190243000 -0400
@@ -24,7 +24,11 @@
 #include "device/usb/usb_error.h"
 #include "device/usb/webusb_descriptors.h"
 #include "net/base/io_buffer.h"
-#include "third_party/libusb/src/libusb/libusb.h"
+#if defined(OS_FREEBSD)
+#  include <libusb.h>
+#else
+#  include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 #if defined(OS_WIN)
 #include <setupapi.h>
@@ -292,6 +296,7 @@
   }
   context_ = new UsbContext(platform_context);
 
+#if !defined(OS_FREEBSD)
   rv = libusb_hotplug_register_callback(
       context_->context(),
       static_cast<libusb_hotplug_event>(LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED |
@@ -304,6 +309,8 @@
   }
 
   RefreshDevices();
+#endif // !defined(OS_FREEBSD)
+
 #if defined(OS_WIN)
   DeviceMonitorWin* device_monitor = DeviceMonitorWin::GetForAllInterfaces();
   if (device_monitor) {
@@ -313,9 +320,11 @@
 }
 
 UsbServiceImpl::~UsbServiceImpl() {
+#if !defined(OS_FREEBSD)
   if (hotplug_enabled_) {
     libusb_hotplug_deregister_callback(context_->context(), hotplug_handle_);
   }
+#endif // !defined(OS_FREEBSD)
   for (const auto& map_entry : devices_) {
     map_entry.second->OnDisconnect();
   }
@@ -553,6 +562,7 @@
   device->OnDisconnect();
 }
 
+#if !defined(OS_FREEBSD)
 // static
 int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb_context* context,
                                                 PlatformUsbDevice device,
@@ -590,6 +600,7 @@
 
   return 0;
 }
+#endif // !defined(OS_FREEBSD)
 
 void UsbServiceImpl::OnPlatformDeviceAdded(PlatformUsbDevice platform_device) {
   DCHECK(CalledOnValidThread());
