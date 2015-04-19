--- media/video/capture/video_capture_device_factory.cc.orig	Wed Mar 11 07:46:10 2015
+++ media/video/capture/video_capture_device_factory.cc	Wed Mar 11 07:46:27 2015
@@ -50,7 +50,7 @@
   callback.Run(device_names.Pass());
 }
 
-#if !defined(OS_MACOSX) && !defined(OS_LINUX) && !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_MACOSX) && !defined(OS_LINUX) && !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
 // static
 VideoCaptureDeviceFactory*
 VideoCaptureDeviceFactory::CreateVideoCaptureDeviceFactory(
