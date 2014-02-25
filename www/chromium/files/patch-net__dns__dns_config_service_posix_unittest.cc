--- ./net/dns/dns_config_service_posix_unittest.cc.orig	2014-02-20 21:28:32.000000000 +0100
+++ ./net/dns/dns_config_service_posix_unittest.cc	2014-02-24 17:23:45.000000000 +0100
@@ -2,8 +2,6 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
-#include <resolv.h>
-
 #include "base/sys_byteorder.h"
 #include "net/dns/dns_config_service_posix.h"
 
