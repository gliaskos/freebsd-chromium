--- ./ipc/sync_socket_unittest.cc.orig	2010-12-13 12:04:13.000000000 +0100
+++ ./ipc/sync_socket_unittest.cc	2010-12-20 20:41:37.000000000 +0100
@@ -7,9 +7,9 @@
 #include <sstream>
 
 #include "base/message_loop.h"
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_POSIX)
 #include "base/file_descriptor_posix.h"
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX)
+#endif  // defined(OS_POSIX)
 #include "base/platform_thread.h"
 #include "base/process_util.h"
 #include "base/sync_socket.h"
