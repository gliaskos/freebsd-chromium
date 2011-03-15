--- v8/src/platform-freebsd.cc.orig	2011-02-03 10:17:51.000000000 +0100
+++ v8/src/platform-freebsd.cc	2011-02-08 21:27:52.000000000 +0100
@@ -524,6 +525,17 @@
   virtual int Unlock() {
     int result = pthread_mutex_unlock(&mutex_);
     return result;
+  }
+
+  virtual int TryLock() {
+    int result = pthread_mutex_trylock(&mutex_);
+    // Return false if the lock is busy and locking failed.
+    if (result == EBUSY) {
+      return false;
+    }
+    ASSERT(result == 0);  // Verify no other errors.
+    return true;
+
   }
 
  private:
