--- third_party/WebKit/Source/wtf/DateMath.cpp.orig	2014-10-02 18:00:38 UTC
+++ third_party/WebKit/Source/wtf/DateMath.cpp
@@ -80,6 +80,7 @@
 #include "StringExtras.h"
 
 #include <algorithm>
+#include <cstdlib>
 #include <limits.h>
 #include <limits>
 #include <math.h>
@@ -732,7 +733,7 @@
                 return std::numeric_limits<double>::quiet_NaN();
 
             int sgn = (o < 0) ? -1 : 1;
-            o = abs(o);
+            o = std::abs(o);
             if (*dateString != ':') {
                 if (o >= 24)
                     offset = ((o / 100) * 60 + (o % 100)) * sgn;
@@ -821,7 +822,7 @@
     stringBuilder.append(' ');
 
     stringBuilder.append(utcOffset > 0 ? '+' : '-');
-    int absoluteUTCOffset = abs(utcOffset);
+    int absoluteUTCOffset = std::abs(utcOffset);
     stringBuilder.append(twoDigitStringFromNumber(absoluteUTCOffset / 60));
     stringBuilder.append(twoDigitStringFromNumber(absoluteUTCOffset % 60));
 
