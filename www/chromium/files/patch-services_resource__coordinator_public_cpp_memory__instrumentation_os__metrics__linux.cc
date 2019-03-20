--- services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc.orig	2019-03-11 22:01:02 UTC
+++ services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
@@ -17,8 +17,10 @@
 #include "build/build_config.h"
 #include "services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics.h"
 
+#if !defined(OS_BSD)
 // Symbol with virtual address of the start of ELF header of the current binary.
 extern char __ehdr_start;
+#endif
 
 namespace memory_instrumentation {
 
@@ -67,6 +69,7 @@ struct ModuleData {
 
 ModuleData GetMainModuleData() {
   ModuleData module_data;
+#if !defined(OS_BSD)
   Dl_info dl_info;
   if (dladdr(&__ehdr_start, &dl_info)) {
     base::Optional<std::string> build_id =
@@ -76,6 +79,7 @@ ModuleData GetMainModuleData() {
       module_data.build_id = *build_id;
     }
   }
+#endif
   return module_data;
 }
 
@@ -123,14 +127,14 @@ bool ParseSmapsHeader(const char* header_line,
   // Build ID is needed to symbolize heap profiles, and is generated only on
   // official builds. Build ID is only added for the current library (chrome)
   // since it is racy to read other libraries which can be unmapped any time.
-#if defined(OFFICIAL_BUILD)
+#if defined(OFFICIAL_BUILD) && !defined(OS_BSD)
   if (!region->mapped_file.empty() &&
       base::StartsWith(main_module_data.path, region->mapped_file,
                        base::CompareCase::SENSITIVE) &&
       !main_module_data.build_id.empty()) {
     region->module_debugid = main_module_data.build_id;
   }
-#endif  // defined(OFFICIAL_BUILD)
+#endif  // defined(OFFICIAL_BUILD) && !defined(OS_BSD)
 
   return res;
 }
@@ -217,6 +221,9 @@ void OSMetrics::SetProcSmapsForTesting(FILE* f) {
 // static
 bool OSMetrics::FillOSMemoryDump(base::ProcessId pid,
                                  mojom::RawOSMemDump* dump) {
+#if defined(OS_BSD)
+  return false;
+#else
   base::ScopedFD autoclose = OpenStatm(pid);
   int statm_fd = autoclose.get();
 
@@ -242,6 +249,7 @@ bool OSMetrics::FillOSMemoryDump(base::ProcessId pid,
   dump->resident_set_kb = process_metrics->GetResidentSetSize() / 1024;
 
   return true;
+#endif
 }
 
 // static
