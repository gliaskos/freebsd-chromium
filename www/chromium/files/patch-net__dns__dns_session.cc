--- ./net/dns/dns_session.cc.orig	2014-03-04 03:16:06.000000000 +0100
+++ ./net/dns/dns_session.cc	2014-03-07 14:10:34.000000000 +0100
@@ -178,7 +178,7 @@
   base::TimeDelta current_error = rtt - estimate;
   estimate += current_error / 8;  // * alpha
   base::TimeDelta abs_error = base::TimeDelta::FromInternalValue(
-      std::abs(current_error.ToInternalValue()));
+      std::labs(current_error.ToInternalValue()));
   deviation += (abs_error - deviation) / 4;  // * delta
 
   // Histogram-based method.
