--- media/video/capture/file_video_capture_device_factory.cc.orig	2015-06-21 10:53:12.146199000 -0400
+++ media/video/capture/file_video_capture_device_factory.cc	2015-06-21 10:53:41.233007000 -0400
@@ -51,7 +51,7 @@
       command_line_file_path.value(),
       kFileVideoCaptureDeviceName,
       VideoCaptureDevice::Name::AVFOUNDATION));
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   device_names->push_back(VideoCaptureDevice::Name(
       command_line_file_path.value(),
       kFileVideoCaptureDeviceName,
