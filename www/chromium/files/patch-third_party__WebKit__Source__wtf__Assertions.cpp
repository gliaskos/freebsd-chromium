--- ./third_party/WebKit/Source/wtf/Assertions.cpp.orig	2014-04-02 21:08:53.000000000 +0200
+++ ./third_party/WebKit/Source/wtf/Assertions.cpp	2014-04-04 01:39:18.000000000 +0200
@@ -38,6 +38,7 @@
 #include "OwnPtr.h"
 #include "PassOwnPtr.h"
 
+#include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
