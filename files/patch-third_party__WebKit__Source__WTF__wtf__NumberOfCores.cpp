--- ./third_party/WebKit/Source/WTF/wtf/NumberOfCores.cpp.orig	2012-08-17 03:05:26.000000000 +0200
+++ ./third_party/WebKit/Source/WTF/wtf/NumberOfCores.cpp	2012-08-23 22:31:45.000000000 +0200
@@ -30,6 +30,7 @@
 #include <sys/param.h>
 // sys/types.h must come before sys/sysctl.h because the latter uses
 // data types defined in the former. See sysctl(3) and style(9).
+#include <unistd.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #elif OS(LINUX) || OS(AIX) || OS(SOLARIS)
