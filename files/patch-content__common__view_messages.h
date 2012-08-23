--- ./content/common/view_messages.h.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/common/view_messages.h	2012-08-23 22:31:44.000000000 +0200
@@ -1907,7 +1907,7 @@
 IPC_MESSAGE_CONTROL1(ViewHostMsg_SuddenTerminationChanged,
                      bool /* enabled */)
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 // On OSX, we cannot allocated shared memory from within the sandbox, so
 // this call exists for the renderer to ask the browser to allocate memory
 // on its behalf. We return a file descriptor to the POSIX shared memory.
