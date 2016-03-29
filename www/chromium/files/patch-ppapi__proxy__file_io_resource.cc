--- ppapi/proxy/file_io_resource.cc.orig	2016-03-05 12:03:40.008847370 +0100
+++ ppapi/proxy/file_io_resource.cc	2016-03-05 12:03:52.593845955 +0100
@@ -285,17 +285,17 @@
 
   if (check_quota_) {
     int64_t increase = 0;
-    uint64_t max_offset = 0;
+    uint64_t _max_offset = 0;
     bool append = (open_flags_ & PP_FILEOPENFLAG_APPEND) != 0;
     if (append) {
       increase = bytes_to_write;
     } else {
-      uint64_t max_offset = offset + bytes_to_write;
-      if (max_offset >
+      uint64_t _max_offset = offset + bytes_to_write;
+      if (_max_offset >
           static_cast<uint64_t>(std::numeric_limits<int64_t>::max())) {
         return PP_ERROR_FAILED;  // amount calculation would overflow.
       }
-      increase = static_cast<int64_t>(max_offset) - max_written_offset_;
+      increase = static_cast<int64_t>(_max_offset) - max_written_offset_;
     }
 
     if (increase > 0) {
@@ -319,7 +319,7 @@
       if (append)
         append_mode_write_amount_ += bytes_to_write;
       else
-        max_written_offset_ = max_offset;
+        max_written_offset_ = _max_offset;
     }
   }
   return WriteValidated(offset, buffer, bytes_to_write, callback);
@@ -597,9 +597,9 @@
   } else {
     DCHECK_LE(offset + bytes_to_write - max_written_offset_, granted);
 
-    int64_t max_offset = offset + bytes_to_write;
-    if (max_written_offset_ < max_offset)
-      max_written_offset_ = max_offset;
+    int64_t _max_offset = offset + bytes_to_write;
+    if (max_written_offset_ < _max_offset)
+      max_written_offset_ = _max_offset;
   }
 
   if (callback->is_blocking()) {
