--- components/neterror/resources/neterror.js.orig.port	Sat Apr 16 20:27:04 2016
+++ components/neterror/resources/neterror.js	Sat Apr 16 20:27:19 2016
@@ -153,7 +153,7 @@ function setUpCachedButton(buttonStrings) {
 }
 
 var primaryControlOnLeft = true;
-<if expr="is_macosx or is_ios or is_linux or is_android">
+<if expr="is_macosx or is_ios or is_linux or is_android or is_bsd">
 primaryControlOnLeft = false;
 </if>
 