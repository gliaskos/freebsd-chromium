--- net/url_request/url_request_context_builder.cc.orig	Sat May 23 00:59:48 2015
+++ net/url_request/url_request_context_builder.cc	Sat May 23 01:15:31 2015
@@ -268,7 +268,7 @@ URLRequestContext* URLRequestContextBuilder::Build() {
   if (!proxy_service_) {
     // TODO(willchan): Switch to using this code when
     // ProxyService::CreateSystemProxyConfigService()'s signature doesn't suck.
-  #if defined(OS_LINUX) || defined(OS_ANDROID)
+  #if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
     ProxyConfigService* proxy_config_service = proxy_config_service_.release();
   #else
     ProxyConfigService* proxy_config_service = NULL;
