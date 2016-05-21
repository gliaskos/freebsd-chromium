--- third_party/cacheinvalidation/src/google/cacheinvalidation/include/types.h.orig	2016-05-20 19:45:41.011584000 -0400
+++ third_party/cacheinvalidation/src/google/cacheinvalidation/include/types.h	2016-05-20 19:48:55.624659000 -0400
@@ -334,6 +334,8 @@
      */
     PERMANENT_FAILURE
   };
+  
+  Status() : code_(SUCCESS), message_() {}
 
   /* Creates a new Status object given the code and message. */
   Status(Code code, const string& message) : code_(code), message_(message) {}
