--- third_party/googletest/src/googletest/test/gtest_unittest.cc.orig	2018-08-23 02:49:12.088122000 +0200
+++ third_party/googletest/src/googletest/test/gtest_unittest.cc	2018-08-23 02:50:44.431616000 +0200
@@ -113,6 +113,7 @@
   EXPECT_EQ("event=TestIterationEnd&passed=1&elapsed_time=0ms\n", *output());
 }
 
+#if GTEST_LANG_CXX11 // workaround breakage with GCC 4.2
 TEST_F(StreamingListenerTest, OnTestCaseStart) {
   *output() = "";
   streamer_.OnTestCaseStart(TestCase("FooTest", "Bar", NULL, NULL));
@@ -124,6 +125,7 @@
   streamer_.OnTestCaseEnd(TestCase("FooTest", "Bar", NULL, NULL));
   EXPECT_EQ("event=TestCaseEnd&passed=1&elapsed_time=0ms\n", *output());
 }
+#endif
 
 TEST_F(StreamingListenerTest, OnTestStart) {
   *output() = "";
