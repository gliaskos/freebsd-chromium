--- base/task_scheduler/scheduler_single_thread_task_runner_manager_unittest.cc.orig	2018-08-23 19:26:59.907421000 +0200
+++ base/task_scheduler/scheduler_single_thread_task_runner_manager_unittest.cc	2018-08-23 19:27:50.577418000 +0200
@@ -301,6 +301,7 @@
   EXPECT_EQ(ThreadPriority::NORMAL, thread_priority_normal);
 }
 
+#if !defined(OS_BSD)
 TEST_P(TaskSchedulerSingleThreadTaskRunnerManagerCommonTest, ThreadNamesSet) {
   constexpr TaskTraits foo_traits = {TaskPriority::BACKGROUND,
                                      TaskShutdownBehavior::BLOCK_SHUTDOWN};
@@ -343,6 +344,7 @@
     EXPECT_NE(std::string::npos, user_blocking_captured_name.find("Shared"));
   }
 }
+#endif
 
 TEST_P(TaskSchedulerSingleThreadTaskRunnerManagerCommonTest,
        PostTaskAfterShutdown) {
