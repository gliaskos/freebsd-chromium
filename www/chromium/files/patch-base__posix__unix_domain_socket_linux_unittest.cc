--- ./base/posix/unix_domain_socket_linux_unittest.cc.orig	2014-04-02 21:03:55.000000000 +0200
+++ ./base/posix/unix_domain_socket_linux_unittest.cc	2014-04-04 01:39:18.000000000 +0200
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
