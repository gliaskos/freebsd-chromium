--- base/debug/proc_maps_linux.cc.orig	2020-03-16 18:39:41 UTC
+++ base/debug/proc_maps_linux.cc
@@ -12,7 +12,7 @@
 #include "base/strings/string_split.h"
 #include "build/build_config.h"
 
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_ANDROID)
 #include <inttypes.h>
 #endif
 
@@ -28,6 +28,12 @@
 namespace base {
 namespace debug {
 
+#if defined(OS_BSD)
+const char kProcSelfMapsPath[] = "/proc/curproc/map";
+#else
+const char kProcSelfMapsPath[] = "/proc/self/maps";
+#endif
+
 // Scans |proc_maps| starting from |pos| returning true if the gate VMA was
 // found, otherwise returns false.
 static bool ContainsGateVMA(std::string* proc_maps, size_t pos) {
@@ -49,9 +55,9 @@ bool ReadProcMaps(std::string* proc_maps) {
   // file for details.
   const long kReadSize = sysconf(_SC_PAGESIZE);
 
-  base::ScopedFD fd(HANDLE_EINTR(open("/proc/self/maps", O_RDONLY)));
+  base::ScopedFD fd(HANDLE_EINTR(open(kProcSelfMapsPath, O_RDONLY)));
   if (!fd.is_valid()) {
-    DPLOG(ERROR) << "Couldn't open /proc/self/maps";
+    DPLOG(ERROR) << "Couldn't open " << kProcSelfMapsPath;
     return false;
   }
   proc_maps->clear();
@@ -65,7 +71,7 @@ bool ReadProcMaps(std::string* proc_maps) {
 
     ssize_t bytes_read = HANDLE_EINTR(read(fd.get(), buffer, kReadSize));
     if (bytes_read < 0) {
-      DPLOG(ERROR) << "Couldn't read /proc/self/maps";
+      DPLOG(ERROR) << "Couldn't read " << kProcSelfMapsPath;
       proc_maps->clear();
       return false;
     }
@@ -119,6 +125,25 @@ bool ParseProcMaps(const std::string& input,
     long inode = 0;
     int path_index = 0;
 
+#if defined(OS_BSD)
+    // Format:
+    //
+    // start    end      resident private_resident obj                perms ref_count shadow_count flags  cow needs_copy type  fullpath cred ruid
+    // 0x200000 0x202000 2        6                0xfffff80005be9000 r--   3         1            0x1000 COW NC         vnode /bin/cat NCH  -1
+    //
+    if (sscanf(line, "%lli %lli %*ld %*ld %*lli %3c %*ld %*ld 0x%*x %*s %*s %*s %n",
+	       &region.start, &region.end, permissions, &path_index) < 3) {
+      DPLOG(WARNING) << "sscanf failed for line: " << line;
+      return false;
+    }
+
+    const char* fullpath = line + path_index;
+    const char* cred     = strchr(fullpath, ' ');
+
+    if (fullpath[0] == '-') {
+      continue;
+    }
+#else
     // Sample format from man 5 proc:
     //
     // address           perms offset  dev   inode   pathname
@@ -133,6 +158,7 @@ bool ParseProcMaps(const std::string& input,
       DPLOG(WARNING) << "sscanf failed for line: " << line;
       return false;
     }
+#endif
 
     region.permissions = 0;
 
@@ -151,14 +177,24 @@ bool ParseProcMaps(const std::string& input,
     else if (permissions[2] != '-')
       return false;
 
+#if !defined(OS_BSD)
     if (permissions[3] == 'p')
       region.permissions |= MappedMemoryRegion::PRIVATE;
     else if (permissions[3] != 's' && permissions[3] != 'S')  // Shared memory.
       return false;
+#endif
 
     // Pushing then assigning saves us a string copy.
     regions.push_back(region);
+#if defined(OS_BSD)
+    if (cred != nullptr) {
+      regions.back().path.assign(line + path_index, cred - fullpath);
+    } else {
+      regions.back().path.assign(line + path_index);
+    }
+#else
     regions.back().path.assign(line + path_index);
+#endif
   }
 
   regions_out->swap(regions);
