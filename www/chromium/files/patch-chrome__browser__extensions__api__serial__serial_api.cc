--- ./chrome/browser/extensions/api/serial/serial_api.cc.orig	2014-08-13 21:02:09.000000000 +0200
+++ ./chrome/browser/extensions/api/serial/serial_api.cc	2014-08-21 21:57:10.000000000 +0200
@@ -85,11 +85,13 @@
 void SerialGetDevicesFunction::Work() {
   DCHECK_CURRENTLY_ON(BrowserThread::FILE);
 
+#if !defined(OS_FREEBSD) //XXX(rene) quick hack
   scoped_ptr<device::SerialDeviceEnumerator> enumerator =
       device::SerialDeviceEnumerator::Create();
   mojo::Array<device::SerialDeviceInfoPtr> devices = enumerator->GetDevices();
   results_ = serial::GetDevices::Results::Create(
       devices.To<std::vector<linked_ptr<serial::DeviceInfo> > >());
+#endif
 }
 
 SerialConnectFunction::SerialConnectFunction() {}
