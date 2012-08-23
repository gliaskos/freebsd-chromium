--- ./content/test/mock_render_process_host.cc.orig	2012-08-17 03:01:26.000000000 +0200
+++ ./content/test/mock_render_process_host.cc	2012-08-23 22:31:44.000000000 +0200
@@ -115,7 +115,7 @@
   DuplicateHandle(GetCurrentProcess(), dib_id.handle, GetCurrentProcess(),
                   &duped, 0, TRUE, DUPLICATE_SAME_ACCESS);
   transport_dib_ = TransportDIB::Map(duped);
-#elif defined(OS_MACOSX)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
   // On Mac, TransportDIBs are always created in the browser, so we cannot map
   // one from a dib_id.
   transport_dib_ = TransportDIB::Create(100 * 100 * 4, 0);
