--- ./components/usb_service/usb_context.cc.orig	2014-07-15 21:02:29.000000000 +0200
+++ ./components/usb_service/usb_context.cc	2014-07-20 18:13:08.000000000 +0200
@@ -45,7 +45,9 @@
   running_ = false;
   // Spreading running_ to the UsbEventHandler thread.
   base::subtle::MemoryBarrier();
+#if !defined(OS_FREEBSD) // XXX(rene) we should use internal libusb which definees this function
   libusb_interrupt_handle_event(context_);
+#endif
   base::PlatformThread::Join(thread_handle_);
 }
 
