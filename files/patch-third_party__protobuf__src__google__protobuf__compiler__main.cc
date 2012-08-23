--- ./third_party/protobuf/src/google/protobuf/compiler/main.cc.orig	2012-08-17 03:01:36.000000000 +0200
+++ ./third_party/protobuf/src/google/protobuf/compiler/main.cc	2012-08-23 22:31:45.000000000 +0200
@@ -35,9 +35,12 @@
 #include <google/protobuf/compiler/python/python_generator.h>
 #include <google/protobuf/compiler/java/java_generator.h>
 
+#include <fenv.h>
 
 int main(int argc, char* argv[]) {
 
+  fedisableexcept(FE_INVALID);
+
   google::protobuf::compiler::CommandLineInterface cli;
   cli.AllowPlugins("protoc-");
 
