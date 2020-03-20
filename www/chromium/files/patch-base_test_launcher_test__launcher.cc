--- base/test/launcher/test_launcher.cc.orig	2020-03-16 18:40:27 UTC
+++ base/test/launcher/test_launcher.cc
@@ -55,6 +55,7 @@
 #include "testing/gtest/include/gtest/gtest.h"
 
 #if defined(OS_POSIX)
+#include <signal.h>
 #include <fcntl.h>
 
 #include "base/files/file_descriptor_watcher_posix.h"
