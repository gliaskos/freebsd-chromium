--- ./components/usb_service/usb_context.cc.orig	2014-06-30 21:02:47.000000000 +0200
+++ ./components/usb_service/usb_context.cc	2014-07-07 15:12:47.000000000 +0200
@@ -45,7 +45,9 @@
   running_ = false;
   // Spreading running_ to the UsbEventHandler thread.
   base::subtle::MemoryBarrier();
+#if !defined(OS_FREEBSD) // XXX(rene) we should use internal libusb which definees this function
   libusb_interrupt_handle_event(context_);
+#endif
   base::PlatformThread::Join(thread_handle_);
 }
 
