--- chrome/browser/ui/views/task_manager_view.cc.orig	Sat May 23 00:59:48 2015
+++ chrome/browser/ui/views/task_manager_view.cc	Sat May 23 01:06:30 2015
@@ -326,7 +326,7 @@ void TaskManagerView::Init() {
                       ui::TableColumn::RIGHT, -1, 0));
   columns_.back().sortable = true;
   // TODO(port) http://crbug.com/120488 for non-Linux.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   columns_.push_back(ui::TableColumn(IDS_TASK_MANAGER_IDLE_WAKEUPS_COLUMN,
                                      ui::TableColumn::RIGHT, -1, 0));
   columns_.back().sortable = true;
