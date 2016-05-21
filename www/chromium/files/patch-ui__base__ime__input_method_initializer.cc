--- ui/base/ime/input_method_initializer.cc.orig	2016-03-25 09:05:03.000000000 -0400
+++ ui/base/ime/input_method_initializer.cc	2016-05-21 12:25:55.445315000 -0400
@@ -8,14 +8,14 @@
 
 #if defined(OS_CHROMEOS)
 #include "ui/base/ime/ime_bridge.h"
-#elif defined(USE_AURA) && defined(OS_LINUX)
+#elif defined(USE_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
 #include "base/logging.h"
 #include "ui/base/ime/linux/fake_input_method_context_factory.h"
 #endif
 
 namespace {
 
-#if !defined(OS_CHROMEOS) && defined(USE_AURA) && defined(OS_LINUX)
+#if !defined(OS_CHROMEOS) && defined(USE_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
 const ui::LinuxInputMethodContextFactory* g_linux_input_method_context_factory;
 #endif
 
@@ -38,7 +38,7 @@
 void InitializeInputMethodForTesting() {
 #if defined(OS_CHROMEOS)
   IMEBridge::Initialize();
-#elif defined(USE_AURA) && defined(OS_LINUX)
+#elif defined(USE_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
   if (!g_linux_input_method_context_factory)
     g_linux_input_method_context_factory = new FakeInputMethodContextFactory();
   const LinuxInputMethodContextFactory* factory =
@@ -54,7 +54,7 @@
 void ShutdownInputMethodForTesting() {
 #if defined(OS_CHROMEOS)
   IMEBridge::Shutdown();
-#elif defined(USE_AURA) && defined(OS_LINUX)
+#elif defined(USE_AURA) && (defined(OS_LINUX) || defined(OS_BSD)) 
   const LinuxInputMethodContextFactory* factory =
       LinuxInputMethodContextFactory::instance();
   CHECK(!factory || factory == g_linux_input_method_context_factory)
