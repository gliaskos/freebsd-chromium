--- ./third_party/WebKit/Source/wtf/Assertions.cpp.orig	2014-03-19 20:07:09.000000000 +0100
+++ ./third_party/WebKit/Source/wtf/Assertions.cpp	2014-03-21 00:27:13.000000000 +0100
@@ -38,6 +38,7 @@
 #include "OwnPtr.h"
 #include "PassOwnPtr.h"
 
+#include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
