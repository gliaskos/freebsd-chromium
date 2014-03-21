--- ./chrome/browser/usb/usb_context.cc.orig	2014-03-19 20:02:38.000000000 +0100
+++ ./chrome/browser/usb/usb_context.cc	2014-03-21 00:27:12.000000000 +0100
@@ -43,7 +43,9 @@
   running_ = false;
   // Spreading running_ to the UsbEventHandler thread.
   base::subtle::MemoryBarrier();
+#if !defined(OS_FREEBSD)
   libusb_interrupt_handle_event(context_);
+#endif
   base::PlatformThread::Join(thread_handle_);
 }
 
