--- ./media/audio/audio_input_volume_unittest.cc.orig	2014-03-05 22:25:32.000000000 +0100
+++ ./media/audio/audio_input_volume_unittest.cc	2014-03-07 23:57:26.000000000 +0100
@@ -74,7 +74,7 @@
         params, device_id);
     EXPECT_TRUE(NULL != ais);
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // Some linux devices do not support our settings, we may fail to open
     // those devices.
     if (!ais->Open()) {
