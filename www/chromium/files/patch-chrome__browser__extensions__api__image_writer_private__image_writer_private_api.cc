--- ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc.orig	2014-03-04 03:17:16.000000000 +0100
+++ ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc	2014-03-07 14:10:32.000000000 +0100
@@ -164,10 +164,12 @@
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
 
