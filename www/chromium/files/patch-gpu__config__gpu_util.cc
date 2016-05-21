--- gpu/config/gpu_util.cc.orig	2016-02-06 10:56:51 UTC
+++ gpu/config/gpu_util.cc
@@ -54,10 +54,12 @@ void MergeFeatureSets(std::set<int>* dst
 }
 
 void ApplyGpuDriverBugWorkarounds(base::CommandLine* command_line) {
+#ifndef __FreeBSD__
   GPUInfo gpu_info;
   CollectBasicGraphicsInfo(&gpu_info);
 
   ApplyGpuDriverBugWorkarounds(gpu_info, command_line);
+#endif
 }
 
 void ApplyGpuDriverBugWorkarounds(const GPUInfo& gpu_info,
