--- ./chrome/browser/gpu_process_host.h.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/gpu_process_host.h	2010-12-20 20:41:37.000000000 +0100
@@ -85,7 +85,7 @@
   void OnChannelEstablished(const IPC::ChannelHandle& channel_handle,
                             const GPUInfo& gpu_info);
   void OnSynchronizeReply();
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   void OnGetViewXID(gfx::NativeViewId id, IPC::Message* reply_msg);
   void OnReleaseXID(unsigned long xid);
   void OnResizeXID(unsigned long xid, gfx::Size size, IPC::Message* reply_msg);
