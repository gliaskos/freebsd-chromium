--- components/usb_service.gypi.orig	2014-07-15 21:02:29.000000000 +0200
+++ components/usb_service.gypi	2014-08-11 22:38:00.000000000 +0200
@@ -37,6 +37,11 @@
         'dependencies': [
           '../build/linux/system.gyp:udev',
         ],
+      }],
+      ['OS == "freebsd"', {
+        'dependencies!': [
+          '../third_party/libusb/libusb.gyp:libusb',
+        ],
       }]
     ]
   }],
