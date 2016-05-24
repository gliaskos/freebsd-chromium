--- ui/shell_dialogs/select_file_dialog.cc.orig	2016-05-11 19:02:35 UTC
+++ ui/shell_dialogs/select_file_dialog.cc
@@ -20,7 +20,7 @@
 #include "ui/shell_dialogs/select_file_dialog_mac.h"
 #elif defined(OS_ANDROID)
 #include "ui/shell_dialogs/select_file_dialog_android.h"
-#elif defined(USE_AURA) && defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif defined(USE_AURA) && (defined(OS_FREEBSD) || (defined(OS_LINUX) && !defined(OS_CHROMEOS)))
 #include "ui/shell_dialogs/linux_shell_dialog.h"
 #endif
 
@@ -79,7 +79,7 @@ scoped_refptr<SelectFileDialog> SelectFi
       return dialog;
   }
 
-#if defined(USE_AURA) && defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(USE_AURA) && (defined(OS_FREEBSD) || (defined(OS_LINUX) && !defined(OS_CHROMEOS)))
   const ui::LinuxShellDialog* shell_dialogs = ui::LinuxShellDialog::instance();
   if (shell_dialogs)
     return shell_dialogs->CreateSelectFileDialog(listener, policy);
