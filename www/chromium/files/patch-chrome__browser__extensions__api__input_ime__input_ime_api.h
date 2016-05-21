--- chrome/browser/extensions/api/input_ime/input_ime_api.h.orig	Sat Mar  5 23:25:17 2016
+++ chrome/browser/extensions/api/input_ime/input_ime_api.h	Sat Mar  5 23:25:23 2016
@@ -27,7 +27,7 @@
 
 #if defined(OS_CHROMEOS)
 #include "chrome/browser/extensions/api/input_ime/input_ime_api_chromeos.h"
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 #include "chrome/browser/extensions/api/input_ime/input_ime_api_nonchromeos.h"
 #endif  // defined(OS_CHROMEOS)
  
