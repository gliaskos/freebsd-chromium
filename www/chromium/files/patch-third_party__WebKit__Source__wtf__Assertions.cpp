--- third_party/WebKit/Source/wtf/Assertions.cpp.orig	2014-09-04 00:48:11 UTC
+++ third_party/WebKit/Source/wtf/Assertions.cpp
@@ -38,6 +38,7 @@
 #include "OwnPtr.h"
 #include "PassOwnPtr.h"
 
+#include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
