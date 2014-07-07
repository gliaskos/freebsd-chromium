--- ./media/cast/rtcp/rtcp.cc.orig	2014-06-30 21:01:15.000000000 +0200
+++ ./media/cast/rtcp/rtcp.cc	2014-07-01 22:46:25.000000000 +0200
@@ -361,7 +361,7 @@
   int64 rtp_time_diff_ms = rtp_timestamp_diff / frequency_khz;
 
   // Sanity check.
-  if (std::abs(rtp_time_diff_ms) > kMaxDiffSinceReceivedRtcpMs)
+  if (std::labs(rtp_time_diff_ms) > kMaxDiffSinceReceivedRtcpMs)
     return false;
 
   *rtp_timestamp_in_ticks = ConvertNtpToTimeTicks(last_received_ntp_seconds_,
