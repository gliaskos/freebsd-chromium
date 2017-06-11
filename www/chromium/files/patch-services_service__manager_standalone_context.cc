--- services/service_manager/standalone/context.cc.orig	2017-06-05 19:03:11 UTC
+++ services/service_manager/standalone/context.cc
@@ -133,7 +133,7 @@ Context::Context(
       tracing::mojom::StartupPerformanceDataCollectorPtr collector;
       BindInterface(service_manager(), source_identity, tracing_identity,
                     &collector);
-#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
       // CurrentProcessInfo::CreationTime is only defined on some platforms.
       const base::Time creation_time = base::CurrentProcessInfo::CreationTime();
       collector->SetServiceManagerProcessCreationTime(
