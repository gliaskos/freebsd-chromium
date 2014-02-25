--- ./base/posix/unix_domain_socket_linux_unittest.cc.orig	2014-02-20 21:28:45.000000000 +0100
+++ ./base/posix/unix_domain_socket_linux_unittest.cc	2014-02-24 17:23:44.000000000 +0100
@@ -2,8 +2,13 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include "build/build_config.h"
+
 #include <sys/socket.h>
 #include <sys/types.h>
+#if defined(OS_BSD)
+#include <signal.h>
+#endif
 #include <unistd.h>
 
 #include "base/bind.h"
