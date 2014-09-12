--- content/gpu/gpu_main.cc.orig	2014-09-11 08:58:47.000000000 +0200
+++ content/gpu/gpu_main.cc	2014-09-12 12:38:12.000000000 +0200
@@ -71,7 +71,7 @@
                                const CommandLine& command_line);
 bool WarmUpSandbox(const CommandLine& command_line);
 
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_FREEBSD) //XXX(rene) added !FreeBSD
 bool CollectGraphicsInfo(gpu::GPUInfo& gpu_info);
 #endif
 
@@ -265,7 +265,7 @@
       // and we already registered them through SetGpuInfo() above.
       base::TimeTicks before_collect_context_graphics_info =
           base::TimeTicks::Now();
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_FREEBSD) //XXX(rene) added !FreeBSD
       if (!CollectGraphicsInfo(gpu_info))
         dead_on_arrival = true;
 
@@ -393,7 +393,7 @@
   return true;
 }
 
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_FREEBSD)//XXX(rene) added !FreeBSD
 bool CollectGraphicsInfo(gpu::GPUInfo& gpu_info) {
   bool res = true;
   gpu::CollectInfoResult result = gpu::CollectContextGraphicsInfo(&gpu_info);
