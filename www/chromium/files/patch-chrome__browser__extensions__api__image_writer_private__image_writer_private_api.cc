--- ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc.orig	2014-03-05 22:24:41.000000000 +0100
+++ ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc	2014-03-07 23:57:25.000000000 +0100
@@ -179,10 +179,12 @@
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
 
