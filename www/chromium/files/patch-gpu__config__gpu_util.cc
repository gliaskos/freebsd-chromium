--- gpu/config/gpu_util.cc.orig	2014-09-11 08:41:46.000000000 +0200
+++ gpu/config/gpu_util.cc	2014-09-11 17:51:45.000000000 +0200
@@ -54,10 +54,12 @@
 }
 
 void ApplyGpuDriverBugWorkarounds(CommandLine* command_line) {
+#ifndef __FreeBSD__
   GPUInfo gpu_info;
   CollectBasicGraphicsInfo(&gpu_info);
 
   ApplyGpuDriverBugWorkarounds(gpu_info, command_line);
+#endif
 }
 
 void ApplyGpuDriverBugWorkarounds(
