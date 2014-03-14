--- ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc.orig	2014-03-12 20:21:57.000000000 +0100
+++ ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc	2014-03-14 09:23:25.000000000 +0100
@@ -166,10 +166,12 @@
 }
 
 bool ImageWriterPrivateListRemovableStorageDevicesFunction::RunImpl() {
+#if !defined(OS_FREEBSD)
   RemovableStorageProvider::GetAllDevices(
     base::Bind(
       &ImageWriterPrivateListRemovableStorageDevicesFunction::OnDeviceListReady,
       this));
+#endif
   return true;
 }
 
