--- ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc.orig	2014-02-20 21:27:38.000000000 +0100
+++ ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc	2014-02-24 17:23:44.000000000 +0100
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
 
