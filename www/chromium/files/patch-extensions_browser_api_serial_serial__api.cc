--- extensions/browser/api/serial/serial_api.cc.orig	2016-05-11 19:02:22 UTC
+++ extensions/browser/api/serial/serial_api.cc
@@ -86,11 +86,13 @@ bool SerialGetDevicesFunction::Prepare()
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
