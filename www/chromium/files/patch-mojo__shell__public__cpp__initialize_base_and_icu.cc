--- mojo/shell/public/cpp/initialize_base_and_icu.cc.orig	2016-05-21 13:21:25.857833000 -0400
+++ mojo/shell/public/cpp/initialize_base_and_icu.cc	2016-05-21 13:22:29.638972000 -0400
@@ -33,11 +33,13 @@
   base::SysInfo::MaxSharedMemorySize();
 #endif
 
+#if !defined(OS_FREEBSD)
   // Initialize core ICU. We must perform the full initialization before we
   // initialize icu::TimeZone subsystem because otherwise ICU gets in a state
   // where the timezone data is disconnected from the locale data which can
   // cause crashes.
   CHECK(base::i18n::InitializeICUFromRawMemory(icu_data));
+#endif
 
 #if !defined(OS_ANDROID)
   // ICU DateFormat class (used in base/time_format.cc) needs to get the
