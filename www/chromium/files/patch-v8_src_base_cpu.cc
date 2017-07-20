--- v8/src/base/cpu.cc.orig	2017-07-01 01:28:04.364825000 +0200
+++ v8/src/base/cpu.cc	2017-07-01 01:29:40.593392000 +0200
@@ -607,6 +607,8 @@
 
 #elif V8_HOST_ARCH_ARM64
 
+#if V8_OS_LINUX
+
   CPUInfo cpu_info;
 
   // Extract implementor from the "CPU implementer" field.
@@ -640,6 +642,7 @@
     }
     delete[] part;
   }
+#endif
 
 #elif V8_HOST_ARCH_PPC
 
