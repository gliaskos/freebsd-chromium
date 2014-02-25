--- ./chrome/browser/usb/usb_context.cc.orig	2014-02-20 21:27:41.000000000 +0100
+++ ./chrome/browser/usb/usb_context.cc	2014-02-24 17:23:44.000000000 +0100
@@ -44,7 +44,9 @@
   running_ = false;
   // Spreading running_ to the UsbEventHandler thread.
   base::subtle::MemoryBarrier();
+#if !defined(OS_FREEBSD)
   libusb_interrupt_handle_event(context_);
+#endif
   base::PlatformThread::Join(thread_handle_);
 }
 
