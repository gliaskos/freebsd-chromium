--- device/usb/usb_service_impl.cc.orig	2014-10-10 09:15:31 UTC
+++ device/usb/usb_service_impl.cc
@@ -17,8 +17,11 @@
 #include "device/usb/usb_context.h"
 #include "device/usb/usb_device_impl.h"
 #include "device/usb/usb_error.h"
+#if defined(OS_FREEBSD)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
-
+#endif
 #if defined(OS_WIN)
 #include <usbiodef.h>
 
@@ -60,11 +63,13 @@
   // Adds a new UsbDevice to the devices_ map based on the given libusb device.
   scoped_refptr<UsbDeviceImpl> AddDevice(PlatformUsbDevice platform_device);
 
+#if !defined(OS_BSD)
   // Handle hotplug events from libusb.
   static int LIBUSB_CALL HotplugCallback(libusb_context* context,
                                          PlatformUsbDevice device,
                                          libusb_hotplug_event event,
                                          void* user_data);
+#endif
   // These functions release a reference to the provided platform device.
   void OnDeviceAdded(PlatformUsbDevice platform_device);
   void OnDeviceRemoved(PlatformUsbDevice platform_device);
@@ -85,7 +90,9 @@
   // connected instead of only when a full enumeration is requested.
   // TODO(reillyg): Support this on all platforms. crbug.com/411715
   bool hotplug_enabled_;
+#if !defined(OS_BSD)
   libusb_hotplug_callback_handle hotplug_handle_;
+#endif
 
   // The map from unique IDs to UsbDevices.
   typedef std::map<uint32, scoped_refptr<UsbDeviceImpl> > DeviceMap;
@@ -177,6 +184,9 @@
       next_unique_id_(0),
       hotplug_enabled_(false),
       weak_factory_(this) {
+#if defined(OS_BSD)
+  hotplug_enabled_ = false;
+#else
   base::MessageLoop::current()->AddDestructionObserver(this);
   task_runner_ = base::ThreadTaskRunnerHandle::Get();
   int rv = libusb_hotplug_register_callback(
@@ -196,9 +206,11 @@
                                          base::Unretained(ui_thread_helper_)));
 #endif  // OS_WIN
   }
+#endif
 }
 
 UsbServiceImpl::~UsbServiceImpl() {
+#if !defined(OS_BSD)
   base::MessageLoop::current()->RemoveDestructionObserver(this);
   if (hotplug_enabled_) {
     libusb_hotplug_deregister_callback(context_->context(), hotplug_handle_);
@@ -211,6 +223,7 @@
   for (const auto& map_entry : devices_) {
     map_entry.second->OnDisconnect();
   }
+#endif
 }
 
 void UsbServiceImpl::RefreshDevices() {
@@ -286,6 +299,7 @@
   }
 }
 
+#if !defined(OS_BSD)
 // static
 int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb_context* context,
                                                 PlatformUsbDevice device,
@@ -323,6 +337,7 @@
 
   return 0;
 }
+#endif
 
 void UsbServiceImpl::OnDeviceAdded(PlatformUsbDevice platform_device) {
   DCHECK(CalledOnValidThread());
