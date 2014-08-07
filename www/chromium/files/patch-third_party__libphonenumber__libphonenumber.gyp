--- ./third_party/libphonenumber/libphonenumber.gyp.orig	2014-07-15 21:03:05.000000000 +0200
+++ ./third_party/libphonenumber/libphonenumber.gyp	2014-07-29 12:19:50.000000000 +0200
@@ -11,6 +11,7 @@
       # generated protocol headers to be available with "phonenumbers" include
       # path, e.g. #include "phonenumbers/foo.pb.h".
       '<(SHARED_INTERMEDIATE_DIR)/protoc_out/third_party/libphonenumber',
+      '<(prefix_dir)/include',
     ],
     'defines': [
       'I18N_PHONENUMBERS_USE_ICU_REGEXP=1',
