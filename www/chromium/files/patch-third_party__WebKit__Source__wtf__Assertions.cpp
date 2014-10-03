--- third_party/WebKit/Source/wtf/Assertions.cpp.orig	2014-10-02 18:00:38 UTC
+++ third_party/WebKit/Source/wtf/Assertions.cpp
@@ -38,6 +38,7 @@
 #include "OwnPtr.h"
 #include "PassOwnPtr.h"
 
+#include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
