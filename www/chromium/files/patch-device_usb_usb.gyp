--- device/usb/usb.gyp.orig	2016-05-11 19:02:22 UTC
+++ device/usb/usb.gyp
@@ -115,6 +115,11 @@
             'usb_service_impl.h',
           ]
         }],
+        ['OS == "freebsd"', {
+          'dependencies!': [
+            '../../third_party/libusb/libusb.gyp:libusb',
+          ],
+        }],
         ['chromeos==1', {
           'dependencies': [
             '../../chromeos/chromeos.gyp:chromeos',
