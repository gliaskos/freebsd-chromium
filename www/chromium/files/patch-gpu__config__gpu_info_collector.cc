--- gpu/config/gpu_info_collector.cc.orig	2014-09-11 08:58:47.000000000 +0200
+++ gpu/config/gpu_info_collector.cc	2014-09-11 17:53:13.000000000 +0200
@@ -126,7 +126,9 @@
   gpu_info->pixel_shader_version = glsl_version;
   gpu_info->vertex_shader_version = glsl_version;
 
+#ifndef __FreeBSD__
   return CollectDriverInfoGL(gpu_info);
+#endif
 }
 
 void MergeGPUInfoGL(GPUInfo* basic_gpu_info,
