--- services/device/device_service.cc.orig	2019-03-17 14:43:20 UTC
+++ services/device/device_service.cc
@@ -118,7 +118,7 @@ DeviceService::~DeviceService() {
   device::BatteryStatusService::GetInstance()->Shutdown();
 #endif
 #if (defined(OS_LINUX) && defined(USE_UDEV)) || defined(OS_WIN) || \
-    defined(OS_MACOSX)
+    defined(OS_MACOSX) || defined(OS_BSD)
   serial_port_manager_task_runner_->DeleteSoon(FROM_HERE,
                                                std::move(serial_port_manager_));
 #endif
@@ -172,7 +172,7 @@ void DeviceService::OnStart() {
 #endif
 
 #if (defined(OS_LINUX) && defined(USE_UDEV)) || defined(OS_WIN) || \
-    defined(OS_MACOSX)
+    defined(OS_MACOSX) || defined(OS_BSD)
   // SerialPortManagerImpl must live on a thread that is allowed to do
   // blocking IO.
   serial_port_manager_ = std::make_unique<SerialPortManagerImpl>(
