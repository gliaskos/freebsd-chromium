--- ./content/public/common/common_param_traits.h.orig	2012-08-17 03:01:29.000000000 +0200
+++ ./content/public/common/common_param_traits.h	2012-08-23 22:31:44.000000000 +0200
@@ -203,7 +203,7 @@
 };
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_FREEBSD)
 template<>
 struct ParamTraits<TransportDIB::Id> {
   typedef TransportDIB::Id param_type;
