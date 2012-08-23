--- ./build/linux/python_arch.sh.orig	2012-08-17 03:01:49.000000000 +0200
+++ ./build/linux/python_arch.sh	2012-08-23 22:31:42.000000000 +0200
@@ -10,12 +10,7 @@
 #  python_arch.sh /path/to/sysroot/usr/lib/libpython2.4.so.1.0
 #
 
-python=$(readlink -f "$1")
-if [ ! -r "$python" ]; then
-  echo unknown
-  exit 0
-fi
-file_out=$(file "$python")
+file_out=$(file "$1")
 if [ $? -ne 0 ]; then
   echo unknown
   exit 0
