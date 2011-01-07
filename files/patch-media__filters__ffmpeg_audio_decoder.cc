--- ./media/filters/ffmpeg_audio_decoder.cc.orig	2011-01-05 16:22:48.000000000 -0500
+++ ./media/filters/ffmpeg_audio_decoder.cc	2011-01-05 16:23:39.000000000 -0500
@@ -50,7 +50,7 @@
 
   // Grab the AVStream's codec context and make sure we have sensible values.
   codec_context_ = av_stream->codec;
-  int bps = av_get_bits_per_sample_fmt(codec_context_->sample_fmt);
+  int bps = av_get_bits_per_sample_format(codec_context_->sample_fmt);
   if (codec_context_->channels <= 0 ||
       codec_context_->channels > Limits::kMaxChannels ||
       bps <= 0 || bps > Limits::kMaxBitsPerSample ||
@@ -77,7 +77,7 @@
   // information.
   media_format_.SetAsInteger(MediaFormat::kChannels, codec_context_->channels);
   media_format_.SetAsInteger(MediaFormat::kSampleBits,
-      av_get_bits_per_sample_fmt(codec_context_->sample_fmt));
+      av_get_bits_per_sample_format(codec_context_->sample_fmt));
   media_format_.SetAsInteger(MediaFormat::kSampleRate,
       codec_context_->sample_rate);
   media_format_.SetAsString(MediaFormat::kMimeType,
@@ -245,7 +245,7 @@
 
 base::TimeDelta FFmpegAudioDecoder::CalculateDuration(size_t size) {
   int64 denominator = codec_context_->channels *
-      av_get_bits_per_sample_fmt(codec_context_->sample_fmt) / 8 *
+      av_get_bits_per_sample_format(codec_context_->sample_fmt) / 8 *
       codec_context_->sample_rate;
   double microseconds = size /
       (denominator / static_cast<double>(base::Time::kMicrosecondsPerSecond));
