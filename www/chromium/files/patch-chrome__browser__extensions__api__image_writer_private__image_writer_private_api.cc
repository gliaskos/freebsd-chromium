--- ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc.orig	2014-04-02 21:04:35.000000000 +0200
+++ ./chrome/browser/extensions/api/image_writer_private/image_writer_private_api.cc	2014-04-04 01:39:18.000000000 +0200
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
 
