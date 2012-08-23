--- ./base/sys_info_freebsd.cc.orig	2012-08-17 03:01:51.000000000 +0200
+++ ./base/sys_info_freebsd.cc	2012-08-23 22:31:42.000000000 +0200
@@ -33,4 +33,21 @@
   return limit;
 }
 
+int SysInfo::NumberOfProcessors() {
+  int mib[2];
+  
+  mib[0] = CTL_HW;
+  mib[1] = HW_NCPU;
+
+  int ncpu;
+  size_t len = sizeof(ncpu);
+
+  if (sysctl(mib, 2, &ncpu, &len, NULL, 0) == -1) {
+    NOTREACHED();
+    return 1;
+  }
+
+  return ncpu;
+}
+
 }  // namespace base
