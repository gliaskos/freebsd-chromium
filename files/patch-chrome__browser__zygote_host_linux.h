--- ./chrome/browser/zygote_host_linux.h.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/zygote_host_linux.h	2010-12-20 20:41:37.000000000 +0100
@@ -46,6 +46,9 @@
     kCmdReap = 1,             // Reap a renderer child.
     kCmdDidProcessCrash = 2,  // Check if child process crashed.
     kCmdGetSandboxStatus = 3, // Read a bitmask of kSandbox*
+#if defined(OS_FREEBSD)
+    kCmdEnd = 5,              // Kill zygote for SOCK_DGRAM.
+#endif
   };
 
   // These form a bitmask which describes the conditions of the sandbox that
