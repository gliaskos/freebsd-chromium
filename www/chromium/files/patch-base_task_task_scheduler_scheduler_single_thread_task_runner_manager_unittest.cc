--- base/task/task_scheduler/scheduler_single_thread_task_runner_manager_unittest.cc.orig	2018-12-04 10:49:38.559217000 +0100
+++ base/task/task_scheduler/scheduler_single_thread_task_runner_manager_unittest.cc	2018-12-04 10:50:09.898539000 +0100
@@ -295,6 +295,9 @@
   EXPECT_EQ(ThreadPriority::NORMAL, thread_priority_normal);
 }
 
+#if defined(OS_BSD)
+#defined ThreadNamesSet DISABLED_ThreadNamesSet
+#endif
 TEST_P(TaskSchedulerSingleThreadTaskRunnerManagerCommonTest, ThreadNamesSet) {
   constexpr TaskTraits foo_traits = {TaskPriority::BEST_EFFORT,
                                      TaskShutdownBehavior::BLOCK_SHUTDOWN};
