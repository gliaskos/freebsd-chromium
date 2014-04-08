--- ./chrome/browser/extensions/api/serial/serial_api.cc.orig	2014-04-02 21:04:37.000000000 +0200
+++ ./chrome/browser/extensions/api/serial/serial_api.cc	2014-04-04 01:39:18.000000000 +0200
@@ -83,7 +83,7 @@
 
 void SerialGetDevicesFunction::Work() {
   DCHECK(BrowserThread::CurrentlyOn(BrowserThread::FILE));
-
+#if !defined(OS_FREEBSD) //XXX(rene) quick hack
   device::SerialDeviceInfoList devices;
   scoped_ptr<device::SerialDeviceEnumerator> enumerator =
       device::SerialDeviceEnumerator::Create();
@@ -105,6 +105,7 @@
   }
 
   results_ = serial::GetDevices::Results::Create(out_devices);
+#endif
 }
 
 SerialConnectFunction::SerialConnectFunction() {}
