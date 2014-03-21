--- ./net/dns/dns_config_service_posix_unittest.cc.orig	2014-03-19 20:01:35.000000000 +0100
+++ ./net/dns/dns_config_service_posix_unittest.cc	2014-03-21 00:27:13.000000000 +0100
@@ -2,8 +2,6 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
-#include <resolv.h>
-
 #include "base/sys_byteorder.h"
 #include "net/dns/dns_config_service_posix.h"
 
