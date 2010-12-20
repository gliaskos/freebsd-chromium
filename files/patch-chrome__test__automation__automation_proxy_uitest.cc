--- ./chrome/test/automation/automation_proxy_uitest.cc.orig	2010-12-13 12:04:45.000000000 +0100
+++ ./chrome/test/automation/automation_proxy_uitest.cc	2010-12-20 20:41:37.000000000 +0100
@@ -1356,7 +1356,7 @@
 #endif  // defined(OS_WIN)
 
 // TODO(port): Need to port autocomplete_edit_proxy.* first.
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
 TEST_F(AutomationProxyTest, AutocompleteGetSetText) {
   scoped_refptr<BrowserProxy> browser(automation()->GetBrowserWindow(0));
   ASSERT_TRUE(browser.get());
@@ -1400,7 +1400,7 @@
   EXPECT_EQ(text_to_set2, actual_text2);
 }
 
-#endif  // defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
 
 #if defined(OS_MACOSX)
 // Disabled, http://crbug.com/48601.
