--- ./chrome/common/render_messages_internal.h.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/render_messages_internal.h	2010-12-20 20:41:37.000000000 +0100
@@ -1998,7 +1998,7 @@
                        int /* fd in browser */)
 #endif
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Asks the browser to create a block of shared memory for the renderer to
   // pass NativeMetafile data to the browser.
   IPC_SYNC_MESSAGE_ROUTED1_1(ViewHostMsg_AllocatePDFTransport,
@@ -2181,7 +2181,7 @@
                        std::string /* extension_id */,
                        std::string /* name */)
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // On OSX, we cannot allocated shared memory from within the sandbox, so
   // this call exists for the renderer to ask the browser to allocate memory
   // on its behalf. We return a file descriptor to the POSIX shared memory.
