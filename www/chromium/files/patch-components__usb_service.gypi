--- components/usb_service.gypi.orig	2014-09-04 00:29:10 UTC
+++ components/usb_service.gypi
@@ -46,6 +46,11 @@
           '../build/linux/system.gyp:udev',
         ],
       }],
+      ['OS == "freebsd"', {
+        'dependencies!': [
+          '../third_party/libusb/libusb.gyp:libusb',
+        ],
+      }], 
       ['chromeos==1', {
         'dependencies': [
           '../chromeos/chromeos.gyp:chromeos',
