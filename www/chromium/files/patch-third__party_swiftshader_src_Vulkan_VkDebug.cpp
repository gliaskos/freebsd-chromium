--- third_party/swiftshader/src/Vulkan/VkDebug.cpp.orig	2020-03-16 18:42:12 UTC
+++ third_party/swiftshader/src/Vulkan/VkDebug.cpp
@@ -34,7 +34,7 @@ namespace {
 
 bool IsUnderDebugger()
 {
-#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__)
+#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__) && !defined(__FreeBSD__)
 	static bool checked = false;
 	static bool res = false;
 
