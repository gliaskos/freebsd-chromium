--- gpu/command_buffer/service/async_pixel_transfer_manager_share_group.cc.orig	2015-04-14 18:31:22.000000000 -0400
+++ gpu/command_buffer/service/async_pixel_transfer_manager_share_group.cc	2015-04-28 09:07:13.631531000 -0400
@@ -46,7 +46,7 @@
       : base::Thread(kAsyncTransferThreadName),
         initialized_(false) {
     Start();
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     SetPriority(base::kThreadPriority_Background);
 #endif
   }
