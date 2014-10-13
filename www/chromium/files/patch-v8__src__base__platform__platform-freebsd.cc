--- v8/src/base/platform/platform-freebsd.cc.orig	2014-10-10 09:16:50 UTC
+++ v8/src/base/platform/platform-freebsd.cc
@@ -141,21 +141,21 @@
     if (bytes_read < 8) break;
     unsigned end = StringToLong(addr_buffer);
     char buffer[MAP_LENGTH];
-    int bytes_read = -1;
+    int _bytes_read = -1;
     do {
-      bytes_read++;
-      if (bytes_read >= MAP_LENGTH - 1)
+      _bytes_read++;
+      if (_bytes_read >= MAP_LENGTH - 1)
         break;
-      bytes_read = read(fd, buffer + bytes_read, 1);
+      bytes_read = read(fd, buffer + _bytes_read, 1);
       if (bytes_read < 1) break;
-    } while (buffer[bytes_read] != '\n');
-    buffer[bytes_read] = 0;
+    } while (buffer[_bytes_read] != '\n');
+    buffer[_bytes_read] = 0;
     // Ignore mappings that are not executable.
     if (buffer[3] != 'x') continue;
     char* start_of_path = index(buffer, '/');
     // There may be no filename in this line.  Skip to next.
     if (start_of_path == NULL) continue;
-    buffer[bytes_read] = 0;
+    buffer[_bytes_read] = 0;
     result.push_back(SharedLibraryAddress(start_of_path, start, end));
   }
   close(fd);
