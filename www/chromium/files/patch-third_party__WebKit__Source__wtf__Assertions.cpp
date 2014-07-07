--- ./third_party/WebKit/Source/wtf/Assertions.cpp.orig	2014-06-30 21:06:59.000000000 +0200
+++ ./third_party/WebKit/Source/wtf/Assertions.cpp	2014-07-01 22:46:25.000000000 +0200
@@ -38,6 +38,7 @@
 #include "OwnPtr.h"
 #include "PassOwnPtr.h"
 
+#include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
