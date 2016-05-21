--- base/trace_event/process_memory_dump.cc.orig	2016-02-06 12:30:54 UTC
+++ base/trace_event/process_memory_dump.cc
@@ -66,7 +66,7 @@ size_t ProcessMemoryDump::CountResidentB
     int error_counter = 0;
     // HANDLE_EINTR tries for 100 times. So following the same pattern.
     do {
-      result = mincore(chunk_start, chunk_size, vector_as_array(&vec));
+      result = mincore(chunk_start, chunk_size, (char *) vector_as_array(&vec));
     } while (result == -1 && errno == EAGAIN && error_counter++ < 100);
     if (result)
       break;
