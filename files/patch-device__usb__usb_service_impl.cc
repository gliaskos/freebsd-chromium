--- device/usb/usb_service_impl.cc.orig	2014-10-10 09:15:31 UTC
+++ device/usb/usb_service_impl.cc
@@ -112,6 +112,9 @@
       next_unique_id_(0),
       hotplug_enabled_(false),
       weak_factory_(this) {
+#if defined(OS_BSD)
+  hotplug_enabled_ = false;
+#else
   task_runner_ = base::ThreadTaskRunnerHandle::Get();
   int rv = libusb_hotplug_register_callback(
       context_->context(),
@@ -130,9 +133,11 @@
                                          base::Unretained(ui_thread_helper_)));
 #endif  // OS_WIN
   }
+#endif  // OS_BSD
 }
 
 UsbServiceImpl::~UsbServiceImpl() {
+#if !defined(OS_BSD)
   if (hotplug_enabled_) {
     libusb_hotplug_deregister_callback(context_->context(), hotplug_handle_);
   }
@@ -144,6 +149,7 @@
   for (const auto& map_entry : devices_) {
     map_entry.second->OnDisconnect();
   }
+#endif
 }
 
 void UsbServiceImpl::RefreshDevices() {
@@ -219,6 +225,7 @@
   }
 }
 
+#if !defined(OS_BSD)
 // static
 int LIBUSB_CALL UsbServiceImpl::HotplugCallback(libusb_context* context,
                                                 PlatformUsbDevice device,
@@ -256,6 +263,7 @@
 
   return 0;
 }
+#endif
 
 void UsbServiceImpl::OnDeviceAdded(PlatformUsbDevice platform_device) {
   DCHECK(CalledOnValidThread());
