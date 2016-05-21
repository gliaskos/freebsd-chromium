--- extensions/browser/api/serial/serial_api.cc.orig	Thu Apr 14 14:02:57 2016
+++ extensions/browser/api/serial/serial_api.cc	Thu Apr 14 14:03:19 2016
@@ -86,11 +86,13 @@
 void SerialGetDevicesFunction::Work() {
   DCHECK_CURRENTLY_ON(BrowserThread::FILE);
 
+#if !defined(OS_BSD)
   scoped_ptr<device::SerialDeviceEnumerator> enumerator =
       device::SerialDeviceEnumerator::Create();
   mojo::Array<device::serial::DeviceInfoPtr> devices = enumerator->GetDevices();
   results_ = serial::GetDevices::Results::Create(
       devices.To<std::vector<linked_ptr<serial::DeviceInfo> > >());
+#endif
 }
 
 SerialConnectFunction::SerialConnectFunction() {
