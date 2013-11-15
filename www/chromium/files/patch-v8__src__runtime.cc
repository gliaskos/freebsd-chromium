--- v8/src/runtime.cc.orig	2013-11-08 08:01:04.000000000 +0100
+++ v8/src/runtime.cc	2013-11-15 13:17:39.000000000 +0100
@@ -14028,7 +14028,7 @@
 
   local_object->SetInternalField(0, reinterpret_cast<Smi*>(break_iterator));
   // Make sure that the pointer to adopted text is NULL.
-  local_object->SetInternalField(1, reinterpret_cast<Smi*>(NULL));
+  local_object->SetInternalField(1, static_cast<Smi*>(NULL));
 
   RETURN_IF_EMPTY_HANDLE(isolate,
       JSObject::SetLocalPropertyIgnoreAttributes(
