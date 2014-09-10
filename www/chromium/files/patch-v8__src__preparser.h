--- ./v8/src/preparser.h.orig	2014-09-10 08:45:37.000000000 +0200
+++ ./v8/src/preparser.h	2014-09-10 08:46:33.000000000 +0200
@@ -437,7 +437,7 @@
   void ReportMessageAt(Scanner::Location location, const char* message,
                        bool is_reference_error = false) {
     Traits::ReportMessageAt(location, message,
-                            reinterpret_cast<const char*>(NULL),
+                            reinterpret_cast<const char*>(__null),
                             is_reference_error);
   }
 
