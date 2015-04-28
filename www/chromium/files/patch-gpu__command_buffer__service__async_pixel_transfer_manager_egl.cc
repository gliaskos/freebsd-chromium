--- gpu/command_buffer/service/async_pixel_transfer_manager_egl.cc.orig	2015-04-28 09:09:12.810537000 -0400
+++ gpu/command_buffer/service/async_pixel_transfer_manager_egl.cc	2015-04-28 09:09:45.873371000 -0400
@@ -89,7 +89,7 @@
  public:
   TransferThread() : base::Thread(kAsyncTransferThreadName) {
     Start();
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     SetPriority(base::kThreadPriority_Background);
 #endif
   }
@@ -465,14 +465,14 @@
 
 void AsyncPixelTransferDelegateEGL::WaitForTransferCompletion() {
   if (state_->TransferIsInProgress()) {
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     g_transfer_thread.Pointer()->SetPriority(base::kThreadPriority_Display);
 #endif
 
     state_->WaitForTransferCompletion();
     DCHECK(!state_->TransferIsInProgress());
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
     g_transfer_thread.Pointer()->SetPriority(base::kThreadPriority_Background);
 #endif
   }
