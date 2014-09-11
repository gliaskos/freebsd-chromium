--- device/serial/serial_io_handler_posix.cc.orig	2014-09-04 02:04:16.000000000 +0200
+++ device/serial/serial_io_handler_posix.cc	2014-09-11 10:52:24.000000000 +0200
@@ -39,7 +39,7 @@
     BITRATE_TO_SPEED_CASE(9600)
     BITRATE_TO_SPEED_CASE(19200)
     BITRATE_TO_SPEED_CASE(38400)
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
     BITRATE_TO_SPEED_CASE(57600)
     BITRATE_TO_SPEED_CASE(115200)
     BITRATE_TO_SPEED_CASE(230400)
@@ -77,7 +77,7 @@
     SPEED_TO_BITRATE_CASE(9600)
     SPEED_TO_BITRATE_CASE(19200)
     SPEED_TO_BITRATE_CASE(38400)
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
     SPEED_TO_BITRATE_CASE(57600)
     SPEED_TO_BITRATE_CASE(115200)
     SPEED_TO_BITRATE_CASE(230400)
